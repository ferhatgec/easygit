/* MIT License
# Forked from 
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
# */

#include <iostream>
#include "EasyGit.hpp"
#include "Library/Colorized.hpp"

#define READY 0

std::string Arg;

void
EasyGit::HelpFunction() {
	colorized::PrintWith(colorized::Colorize(BOLD, MAGENTA).c_str(), "Fegeya EasyGit Functions:\n");
	colorized::PrintWith(colorized::Colorize(BOLD, CYAN).c_str(), "easygit --easy\n");
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
				} else if(arg == "--b") {
					
				} else if(arg == "--help") {
					git.HelpFunction();
					exit(EXIT_SUCCESS);
				} else if(arg == "--h") {
					git.HelpFunction();
				} else if(arg == "--version") {
					
				} else if(arg == "--v") {
								
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
