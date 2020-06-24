/* MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
# */

#include <iostream>
#include "EasyGit.hpp"
#include "Library/Colorized.hpp"
#include "Library/FileSystemPlusPlus.h"

#define READY 0

std::string Arg;
const std::string compilation_time = __TIME__;
std::string ftime(compilation_time); // Convert

std::string EraseAllSubString(std::string & mainString, const std::string & erase) {
    size_t pos = std::string::npos;
    while((pos = mainString.find(erase)) != std::string::npos) {
        mainString.erase(pos, erase.length());
    }
    return mainString;
}

std::string VersionGenerator() {
	return "easygitv" + EraseAllSubString(ftime, ":");
};

void
EasyGit::HelpFunction() {
	colorized::PrintWith(colorized::Colorize(BOLD, MAGENTA).c_str(), "Fegeya EasyGit Functions:\n");
	colorized::PrintWith(colorized::Colorize(BOLD, CYAN).c_str(), "easygit --easy\n");
	colorized::PrintWith(colorized::Colorize(BOLD, BLUE).c_str(), "easygit --license\n");
}

void SystemIntegration(std::string sys) {
	system(sys.c_str());
}

void
EasyGit::Easy(std::string easy) {

}


int main(int argc, char** argv) {
	EasyGit git;
	if(argc > 1) {
		for(int i = 1; i < argc; i++) {
			std::string arg(argv[i]);
			if(arg.substr(0, 2) == "--") {
				if(arg == "--easy") {
					Arg.erase();
					std::getline(std::cin, Arg);
					SystemIntegration("git init");
        				SystemIntegration("git add .");
        				SystemIntegration("git commit -m \"First Commit\"");
        				SystemIntegration("git remote add origin " + Arg); 
        				SystemIntegration("git pull origin master");
        				SystemIntegration("git push -f origin master");
				} else if(arg == "--license") {
					Arg.erase();
					printf("Which License? (e.g. : MIT, Apache2.0, GPLv3)");
					std::getline(std::cin, Arg);
					if(Arg == "MIT") { 
						std::string year;
						std::string name;
						printf("Year :");
						std::getline(std::cin, year);
						printf("Author name : ");
						std::getline(std::cin, name);
						fsplusplus::CreateFileWithoutAppend("LICENSE", git.MITLicense(year, name));
					} else if(Arg == "Apache2.0") {
						std::string year;
						std::string name;
						printf("Year :");
						std::getline(std::cin, year);
						printf("Author name : ");
						std::getline(std::cin, name);
						fsplusplus::CreateFileWithoutAppend("LICENSE", git.Apachev2License(year, name));
					} else if(Arg == "GPLv3") {
						std::string year;
						std::string name;
						printf("Year :");
						std::getline(std::cin, year);
						printf("Author name : ");
						std::getline(std::cin, name);
						fsplusplus::CreateFileWithoutAppend("LICENSE", git.GPLv3License(year, name));
					}
					
				} else if(arg == "--help") {
					git.HelpFunction();
					exit(EXIT_SUCCESS);
				} else if(arg == "--h") {
					git.HelpFunction();
					exit(EXIT_SUCCESS);
				} else if(arg == "--version") {
					colorized::PrintWith(colorized::Colorize(BOLD, MAGENTA).c_str(), EASYGIT_VERSION);
                    colorized::PrintWith(colorized::Colorize(BOLD, MAGENTA).c_str(), "-");
                    colorized::PrintWith(colorized::Colorize(BOLD, BLUE).c_str(), EASYGIT_STATUS);
                    colorized::PrintWith(colorized::Colorize(BOLD, MAGENTA).c_str(), "-");
                    colorized::PrintWith(colorized::Colorize(BOLD, YELLOW).c_str(), VersionGenerator().c_str());
					printf("\n");
				} else if(arg == "--v") {
					colorized::PrintWith(colorized::Colorize(BOLD, MAGENTA).c_str(), EASYGIT_VERSION);
					colorized::PrintWith(colorized::Colorize(BOLD, MAGENTA).c_str(), "-");
					colorized::PrintWith(colorized::Colorize(BOLD, BLUE).c_str(), EASYGIT_STATUS);
					colorized::PrintWith(colorized::Colorize(BOLD, MAGENTA).c_str(), "-");
					colorized::PrintWith(colorized::Colorize(BOLD, YELLOW).c_str(), VersionGenerator().c_str());			
					printf("\n");
				}
			} else {
				git.HelpFunction();
			}
		}
        } else {
        	git.HelpFunction();
        }
	return READY;
}
