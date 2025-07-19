bool checkWithNFA(const string& str) {
    bool s0 = true, s1 = false, s2 = false;

    for (char ch : str) {
        if (ch != '0' && ch != '1') return false;

        bool n0 = false, n1 = false, n2 = false;

        if (s0) {
            if (ch == '0') {
                n0 = true;
                n1 = true;
            } else {
                n0 = true;
            }
        }

        if (s1 && ch == '1') {
            n2 = true;
        }

        s0 = n0;
        s1 = n1;
        s2 = n2;
    }

    return s2;
}
