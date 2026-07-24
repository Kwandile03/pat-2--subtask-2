 string message;
    string fullMorse = "";

    cout << "Enter a short message: ";
    getline(cin, message);

    cout << "\nMorse Code Translation\n";
    cout << "----------------------\n";

    for (char ch : message)