//
// Created by Orsolya on 18.11.2021.
//

#include "Functions.h"
#include <string>
#include <iomanip>

//1.
vector<string> fruits{
        "melon", "strawberry", "raspberry", "apple", "banana", "walnut",
        "lemon"
};

void find_fruits() {
    string fruit_name;
    cout << "Enter subtring you want to find in the fruit list: " << endl;
    cin >> fruit_name;

    auto find = find_if(fruits.begin(), fruits.end(), [fruit_name](const string &value) -> bool {
        return value.find(fruit_name) != string::npos;
    });
    if (find != fruits.end()) {
        cout << "The substring " << " ' "<< fruit_name << " ' " << " appears in the fruit list." << endl;
    }
    else {
        cout << "The substring doesn't appear in any of the fruit's name." << endl;
    }
}

//2.
vector<int> numbers {
        6, 8, 2, 7, 4, 12
};

void even_array() {
    auto check = all_of(numbers.begin(), numbers.end(),[](int i) {
        return i % 2 == 0;
    });

    cout << ((check) ? "All numbers are even" : "Not all numbers, or none of them is even.") << endl;
}

//3.
vector<int> numbers2 {
        12, 8, 9, 21, 0, 3
};

void duplicate_elements() {
    cout << "The duplicates are: ";
    for_each(numbers2.begin(), numbers2.end(), [](int i) {
        cout << i * 2 << " ";
    });
    cout << endl;
}

//4.
vector<string> months {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
};

void nrOfFiveChar() {
    auto month = count_if(months.begin(), months.end(), [] (const string &s) {
        return (s.length() == 5);
    });

    cout << "Number of months which consists of five letters: " << month << endl;
}

//5.
vector <double> numbers3 {
        24, -4, 84, -12, 9, 10
};

void compare() {
    cout << "WITH LAMBDA EXPRESSION: " << endl;
    sort(numbers3.begin(), numbers3.end(), [] (const int &a, const int &b) {
        return a > b;
    });

    for_each(numbers3.begin(), numbers3.end(), [] (int number) {
        cout << number << " ";
    });

    cout << "\nWITH GREATER<> FUNCTOR: " << endl;
    sort(numbers3.begin(), numbers3.end(), greater<>());

    for_each(numbers3.begin(), numbers3.end(), [] (int number) {
        cout << number << " ";
    });
}

//6.
vector< pair<string, double> > months_temp {
        make_pair("January", -2.4),
        make_pair("February", 3.4),
        make_pair("March", 6.2),
        make_pair("April", 8.15),
        make_pair("May", 10.43),
        make_pair("June", 20.3),
        make_pair("July", 24.15),
        make_pair("August", 28.6),
        make_pair("September", 18.4),
        make_pair("October", 13.67),
        make_pair("November", 6.33),
        make_pair("December", 0)
};

void avgTemperature() {
    typedef pair<string, double> pairs;
    sort(months_temp.begin(), months_temp.end(), [] (const pairs &a, const pairs &b) {
        return a.second < b.second;
    });
    cout << endl;
    cout << left << setw(15) << "MONTH" << left << setw(10) << "AVERAGE TEMPERATURE/MONTH" << endl;
    for_each(months_temp.begin(), months_temp.end(), [](const pairs &month) {
        cout << left << setw(15) << month.first << left << setw(10) << month.second << endl;
    });
    cout << endl;
}

//7.
vector<double> numbers4 {
        -6, -9, -13, -4, 5, 33, 48
};

void sortAbs() {
    sort(numbers4.begin(), numbers4.end(), [] (auto &lhs, auto &rhs) {
        return abs(lhs) < abs(rhs);
    });

    cout << "The list of real numbers sorted(in ascending order) by their absolute value is: " << endl;
    for_each(numbers4.begin(), numbers4.end(), [] (auto &number) {
        cout << number << " ";
    });
}

//8.
void monthLowerCase() {
    for_each(months.begin(), months.end(), [] ( string &s) {
        s[0] = tolower(s[0]);
    });
    cout << endl;

    for_each(months.begin(), months.end(), [] (string &s) {
        cout << s << " ";
    });

    cout << endl;
}

void weirdABC() {
   string ABC = "abcdefghijklmnopqrstuvwxyz";
   random_shuffle(ABC.begin(), ABC.end());
   cout << "Shuffeled abc: " << endl;
   cout << ABC << endl;

   cout << "\nMONTHS SORTED BY SHUFFELED ABC: " << endl;
    sort(months.begin(), months.end(), [ABC] (const string &a, const string &b) {
        return lexicographical_compare(a.begin(), a.end(), b.begin(), b.end(), [ABC] (const char &c1, const char &c2) {
            return find(ABC.begin(), ABC.end(), c1) < find(ABC.begin(), ABC.end(), c2);
        });
    });

    for_each(months.begin(), months.end(), [] (string i) {
        cout << i << endl;
    });
}

