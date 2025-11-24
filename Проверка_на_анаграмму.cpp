#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

bool anagramm(string word1,string word2) {
	if (word1.length() != word2.length()) {
		return false;
	}
	sort(word1.begin(), word1.end());
	sort(word2.begin(), word2.end());
	if (word1 == word2) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	string word1 = "anagram";
	string word2 = "nagaram";
	if (anagramm(word1, word2)) {
		cout << "Слова - анаграммы";
	}
}
