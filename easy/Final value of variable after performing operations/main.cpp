class Solution {
public:
    int finalValueAfterOperations(const vector<string>& operations) {
        int x = 0;

        for(const string& operation: operations) {
            char front = operation.front();
            char back = operation.back();

            if(front == '+' || back == '+') {
                x += 1;
            } else if(front == '-' || back == '-') {
                x -= 1;
            }
        }

        return x;
    }
};