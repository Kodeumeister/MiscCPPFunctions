/*
	Name: Split String
	Author: William Kimberley (Kodeumeister)
	Date Modified: 2019-12-08
	Date Created: 2017-12-08
*/

#include <string>
#include <vector>

void split(std::string& str, std::vector<std::string>& result, unsigned char character) {
	unsigned int pos = 0;
	
	// Splitting string.
	for (unsigned int i = 0; i < str.size(); ++i) {
		if (str[i] == character) {
			if (pos == 0) {
				result.push_back(str.substr(0, i - pos));
				pos = i + 1;
			} else {
				result.push_back(str.substr(pos, i - pos));
				pos = i + 1;
			}
		} else if (i == str.size() - 1) {
			result.push_back(str.substr(pos, str.size()));
		}
	}
}