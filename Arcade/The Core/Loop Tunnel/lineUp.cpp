int lineUp(std::string commands) {
    int student[2] = {0, 0};
    auto doCommand = [&](char cmd) {
        switch (cmd) {
            case 'L':
                student[0] += 1;
                student[1] += 3;
                break;
            case 'R':
                student[0] += 3;
                student[1] += 1;
                break;
            case 'A':
                student[0] += 2;
                student[1] += 2;
                break;
        }
        student[0] %= 4;
        student[1] %= 4;
    };

    int res = 0;
    for (auto &command : commands) {
        doCommand(command);
        if (student[0] == student[1])
            res++;
    }
    return res;
}