class BrowserHistory {
  public:
    vector<string> history;
    int curr, last;

    BrowserHistory(string homepage) {
        history.push_back(homepage);
        curr = 0;
        last = 0;
    }

    void visit(string url) {
        curr++;
        if (curr == history.size())
            history.push_back(url);
        else
            history[curr] = url;
        last = curr;
    }

    string back(int steps) {
        curr = max(0, curr - steps);
        return history[curr];
    }

    string forward(int steps) {
        curr = min(last, curr + steps);
        return history[curr];
    }
};
