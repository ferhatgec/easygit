/* MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
# */

#ifndef EASY_GIT_HPP
#define EASY_GIT_HPP

#include <iostream>
#include <cstring>

#define EASYGIT_VERSION "0.1"
#define EASYGIT_STATUS "beta"

class EasyGit {
public:
  EasyGit() { }
	~EasyGit() { }
	void HelpFunction();
	void Easy(std::string);
	// MIT License
	std::string MITLicense(std::string year, std::string name) {
		return "MIT License\n\nCopyright (c) " + year + " " + name + "\n\nPermission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the \"Software\"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:\n\nThe above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.\n\nTHE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.\n";
	}
	
	// GPLv3
	std::string GPLv3License(std::string year, std::string name) {
		return  "GNU GENERAL PUBLIC LICENSE\n\nVersion 3, 29 June 2007 Copyright (C) " + year + " " + name  + "\n\nThis program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License any later version.\n\nThis program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n\n See the GNU General Public License for more details.\n\nYou should have received a copy of the GNU General Public License along with this program.  If not, see <http://www.gnu.org/licenses/>.\n";
	} 
	
	// Apache 2.0
	std::string Apachev2License(std::string year, std::string name) {
		return "Apache License\n\nVersion 2.0, January 2004\n\n<http://www.apache.org/licenses/>\n\nCopyright " + year + " " + name + "\n\nLicensed under the Apache License, Version 2.0 (the \"License\");you may not use this file except in compliance with the License.\n\nYou may obtain a copy of the License at\n\n<http://www.apache.org/licenses/LICENSE-2.0>\n\nUnless required by applicable law or agreed to in writing, software distributed under the License is distributed on an \"AS IS\" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.\n";
	}
};

#endif // EASY_GIT_HPP
