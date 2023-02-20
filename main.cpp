#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>

using namespace std;

int main() {
        char switch_on;
        do
        {
            system("cls");
            cout << "\t\t\t\t\t#>----------<MENU>----------<#" << endl;
            cout << "\t\t\t\t\t|         1 - Case 1         |" << endl;
            cout << "\t\t\t\t\t|         2 - Case 2         |" << endl;
            cout << "\t\t\t\t\t|         3 - Case 3         |" << endl;
            cout << "\t\t\t\t\t|         4 - Case 4         |" << endl;
            cout << "\t\t\t\t\t#>--------------------------<#" << endl;
            cout << "\t\t\t\t\t|         0 - Exit           |" << endl;
            cout << "\t\t\t\t\t#>--------------------------<#" << endl;

            switch_on = _getch();
            system("cls");
            switch (switch_on)
            {
            case '1':
            {
                ifstream input_file("input.txt");
                ofstream output_file("output.txt");

                if (!input_file || !output_file)
                {
                    cout << "Could not open files\n";
                    return 1;
                }

                string line;
                string last_line;

                while (getline(input_file, line)) {
                    if (!input_file.eof()) {
                        output_file << line << "\n";
                    }
                    else {
                        last_line = line;
                    }
                }

                input_file.close();
                output_file.close();

                if (!last_line.empty()) {
                    cout << "Last line was \"" << last_line << "\" and is deleted\n";
                }
                else {
                    cout << "File was empty, nothing deleted\n";
                }

            }break;
            case '2':
            {
                ifstream input_file("input.txt");  

                if (!input_file) {  
                    cout << "Could not open file\n";
                    return 1;
                }

                string line;
                size_t max_length = 0;

                while (getline(input_file, line)) {  
                    size_t length = line.length();  
                    if (length > max_length) {  
                        max_length = length;
                    }
                }

                input_file.close(); 

                if (max_length > 0) {  
                   cout << "Max length: " << max_length << "\n";
                }
                else {
                   cout << "File was empty, max length is 0\n";
                }
            }break;
            case '3':
            {
                string word_to_count = "example";
                string filename = "input.txt";
                ifstream input_file(filename);

                if (!input_file) {
                    cout << "Could not open file " << filename << endl;
                    return 1;
                }

                string line;
                int count = 0;

                while (getline(input_file, line)) {
                    size_t pos = 0;
                    while ((pos = line.find(word_to_count, pos)) != pos) {
                        ++count;
                        pos += word_to_count.size();
                    }
                }

                input_file.close();

                cout << "The word '" << word_to_count << "' appeared " << count << " times in the file " << filename << endl;

            }break;
            case '4':
            {
                string old_word, new_word, filename;
                cout << "Enter the name of the input file: ";
                cin >> filename;
                cout << "Enter the word to be replaced: ";
                cin >> old_word;
                cout << "Enter the new word: ";
                cin >> new_word;

                ifstream input_file(filename);
                if (!input_file) {
                    cout << "Could not open file " << filename << endl;
                    return 1;
                }

                string line, new_file_contents;
                while (getline(input_file, line)) {
                    size_t pos = 0;
                    while ((pos = line.find(old_word, pos)) != pos) {
                        line.replace(pos, old_word.size(), new_word);
                        pos += new_word.size();
                    }
                    new_file_contents += line + '\n';
                }

                input_file.close();

                ofstream output_file(filename);
                if (!output_file) {
                    cout << "Could not open file " << filename << " for writing" << endl;
                    return 1;
                }

                output_file << new_file_contents;
                output_file.close();

                cout << "All occurrences of '" << old_word << "' have been replaced with '" << new_word << "' in the file " << filename << endl;

            }break;
            }
           
        } while (true);
        return 0;
}