        ch = toupper(ch);

        // Process only letters A-Z
        if (ch >= 'A' && ch <= 'Z')
        {
            string code = morse[ch - 'A'];

            cout << ch << ": " << code << endl;

            if (!fullMorse.empty())
            {
                fullMorse += "   ";   // Three spaces between letters
            }

            fullMorse += code;
        }