class Solution {
public:
    int countOfWords(const string& word) {
        int counter{1};
        for(auto it = word.begin(), end = word.end(); it != end; ++it) {
            if(*it == ' ') counter += 1;
        }
        return counter;
    }

    int mostWordsFound(const vector<string>& sentences) {
        int mostWords{0};

        for(auto it = sentences.begin(), end = sentences.end(); it != end; ++it) {
            mostWords = std::max(
                mostWords,
                countOfWords(*it)
            );
        }

        return mostWords;
    }
};