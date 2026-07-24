   else if (ch == ' ')
        {
            // Extra spaces between words
            fullMorse += "       ";   // Seven spaces
        }

        // Ignore numbers and other symbols
    }

    cout << "\nFull Morse code message:\n";
    cout << fullMorse << endl;

    return 0;
}