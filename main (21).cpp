#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int MAX_BOOKS = 10;
const int MAX_PAYMENT_METHODS = 6;
const int MAX_ACCOUNTS = 100;
const int MAX_BOOKSTOREACCOUNTS = 100;

struct NovelLoverAccount {
    string fullName;
    string address;
    string password;
};

void displayBooks(const string bookList[], int bookCount) {
    for (int i = 0; i < bookCount; ++i) {
        cout << i + 1 << ". " << bookList[i] << endl;
    }
}

void createNovelLoverAccount(NovelLoverAccount accounts[], int& accountCount) {
    if (accountCount >= MAX_ACCOUNTS) {
        cout << "Maximum account limit reached. Cannot create a new account." << endl;
        return;
    }

    NovelLoverAccount newAccount;
    string fullName, address, password;

    cout << "Enter your full name: ";
    cin.ignore();
    getline(cin, fullName);

    cout << "Enter your address: ";
    getline(cin, address);

    cout << "Enter your password: ";
    getline(cin, password);

    newAccount.fullName = fullName;
    newAccount.address = address;
    newAccount.password = password;

    accounts[accountCount++] = newAccount;

    cout << "Account created successfully!" << endl;
    
     // Create a text file
  ofstream MyWriteFile("data.dat");
  int i;
  string EnteryourfullName[10];
  string Enteryouraddress[10];
  string Enteryourpassword[10];
   
  i=0;
  // Write to the file
  MyWriteFile << "ahmads yusuf bin sabri" <<"\n";
  MyWriteFile << "954 taman ria\n";
  MyWriteFile << "yandex@26\n";
  
  // Close the file
  MyWriteFile.close();

  // Create a text string, which is used to output the text file
  string myText;

  // Read from the text file
  ifstream myReadFile("data.dat");
   int j=0;
  // Use a while loop together with the getline() function to read the file line by line
   while (!myReadFile.eof())
    {
        getline(myReadFile,EnteryourfullName[j]);
        cout << fullName[j] << "\n";
        
        getline(myReadFile,Enteryouraddress[j]);
        cout << address[j] << "\n";
        
        getline(myReadFile,Enteryourpassword[j]);
        cout << password[j] << "\n";
        
    j=j+1;
   }

  // Close the file
  myReadFile.close();
  
}

void addBookstoreAccount(string UserBookstoreAccountNames[], string UserBookstoreAccountNumbers[], string UserBookstoreBankNames[], string UserBookstorePhoneNumbers[], int& BookstoreNumAccounts) {
    if (BookstoreNumAccounts >= MAX_BOOKSTOREACCOUNTS) {
        cout << "Maximum number of User Bookstore accounts reached." << endl;
        return;
    }

    cout << "Enter full name: ";
    cin.ignore();
    getline(cin, UserBookstoreAccountNames[BookstoreNumAccounts]);

    cout << "Enter account number: ";
    getline(cin, UserBookstoreAccountNumbers[BookstoreNumAccounts]);

    cout << "Enter bank name: ";
    getline(cin, UserBookstoreBankNames[BookstoreNumAccounts]);

    cout << "Enter phone number: ";
    getline(cin, UserBookstorePhoneNumbers[BookstoreNumAccounts]);

    BookstoreNumAccounts++;
    
     // Create a text file
  ofstream MyWriteFile("data.dat");
  int i;
  string EnterfullName[10];
  string Enteraccountnumber[10];
  string Enterbankname[10];
  string Enterphonenumber[10];
   
  i=0;
  // Write to the file
  MyWriteFile << "ahmad yusuf bin sabri" <<"\n";
  MyWriteFile << "9990 7798 6776 778\n";
  MyWriteFile << "bank islam\n";
  MyWriteFile << "01162426280\n";
  
  // Close the file
  MyWriteFile.close();

  // Create a text string, which is used to output the text file
  string myText;

  // Read from the text file
  ifstream myReadFile("data.dat");
   int j=0;
  // Use a while loop together with the getline() function to read the file line by line
   while (!myReadFile.eof())
    {
        getline(myReadFile,EnterfullName[j]);
        cout << EnterfullName[j] << "\n";
        
        getline(myReadFile,Enteraccountnumber[j]);
        cout << Enteraccountnumber[j] << "\n";
        
        getline(myReadFile,Enterbankname[j]);
        cout << Enterbankname[j] << "\n";
        
        getline(myReadFile,Enterphonenumber[j]);
        cout << Enterphonenumber[j] << "\n";
        
    j=j+1;
   }

  // Close the file
  myReadFile.close();
  
}

void retrieveData(const string UserBookstoreAccountNames[], const string UserBookstoreAccountNumbers[], const string UserBookstoreBankNames[], const string UserBookstorePhoneNumbers[], int BookstoreNumAccounts) {
    if (BookstoreNumAccounts == 0) {
        cout << "No Bookstore User Accounts Found." << endl;
        return;
    }

    cout << "Bookstore Account Details:" << endl;
    for (int i = 0; i < BookstoreNumAccounts; i++) {
        cout << "User Account " << i + 1 << ":" << endl;
        cout << "User Full Name: " << UserBookstoreAccountNames[i] << endl;
        cout << "User Account Number: " << UserBookstoreAccountNumbers[i] << endl;
        cout << "User Bank Name: " << UserBookstoreBankNames[i] << endl;
        cout << "User Phone Number: " << UserBookstorePhoneNumbers[i] << endl;
        cout << endl;
        
  // Create a text file
  ofstream MyWriteFile("data.dat");
  
  string UserAccount[10];
  string UserFullName[10];
  string UserAccountNumber[10];
  string UserBankName[10];
  string UserPhoneNumber[10];
   
  i=0;
  // Write to the file
  MyWriteFile << "bank islam" <<"\n";
  MyWriteFile << "ahmad yusuf bin sabri\n";
  MyWriteFile << "9990 7798 6776 778\n";
  MyWriteFile << "bank islam\n";
  MyWriteFile << "01162426280\n";
  
  
  // Close the file
  MyWriteFile.close();

  // Create a text string, which is used to output the text file
  string myText;

  // Read from the text file
  ifstream myReadFile("data.dat");
   int j=0;
  // Use a while loop together with the getline() function to read the file line by line
   while (!myReadFile.eof())
    {
        getline(myReadFile,UserAccount[j]);
        cout << UserAccount[j] << "\n";
        
        getline(myReadFile,UserFullName[j]);
        cout << UserFullName[j] << "\n";
        
        getline(myReadFile,UserAccountNumber[j]);
        cout << UserAccountNumber[j] << "\n";
        
         getline(myReadFile,UserBankName[j]);
        cout << UserBankName[j] << "\n";
        
         getline(myReadFile,UserPhoneNumber[j]);
        cout << UserPhoneNumber[j] << "\n";
        
        j=j+1;
    }

  // Close the file
  myReadFile.close();
  
    }
}

void UpdateUserData(string UserBookstoreAccountNames[], string UserBookstoreAccountNumbers[], string UserBookstoreBankNames[], string UserBookstorePhoneNumbers[], int BookstoreNumAccounts) {
    if (BookstoreNumAccounts == 0) {
        cout << "No accounts found." << endl;
        return;
    }

    int BookstoreAccountIndex;
    cout << "Enter Bookstore Account Index to update (1 - " << BookstoreNumAccounts << "): ";
    cin >> BookstoreAccountIndex;
    cin.ignore();

    if (BookstoreAccountIndex < 1 || BookstoreAccountIndex > BookstoreNumAccounts) {
        cout << "Invalid account index." << endl;
        return;
    }

    cout << "Enter full name: ";
    getline(cin, UserBookstoreAccountNames[BookstoreAccountIndex - 1]);

    cout << "Enter account number: ";
    getline(cin, UserBookstoreAccountNumbers[BookstoreAccountIndex - 1]);

    cout << "Enter bank name: ";
    getline(cin, UserBookstoreBankNames[BookstoreAccountIndex - 1]);

    cout << "Enter phone number: ";
    getline(cin, UserBookstorePhoneNumbers[BookstoreAccountIndex - 1]);

    cout << "Bookstore User Account Updated Successfully." << endl;
    
     // Create a text file
  ofstream MyWriteFile("data.dat");
  int i;
  string Enterfullname[10];
  string Enteraccountnumber[10];
  string Enterbankname[10];
  string Enterphonenumber[10];
   
  i=0;
  // Write to the file
  MyWriteFile << "ahmad yusuf bin sabri" <<"\n";
  MyWriteFile << "9990 7798 6776 778\n";
  MyWriteFile << "bank islam\n";
  MyWriteFile << "01162426280\n";
   
  // Close the file
  MyWriteFile.close();

  // Create a text string, which is used to output the text file
  string myText;

  // Read from the text file
  ifstream myReadFile("data.dat");
   int j=0;
  // Use a while loop together with the getline() function to read the file line by line
   while (!myReadFile.eof())
    {
        getline(myReadFile,Enterfullname[j]);
        cout << Enterfullname[j] << "\n";
        
        getline(myReadFile,Enteraccountnumber[j]);
        cout << Enteraccountnumber[j] << "\n";
        
        getline(myReadFile,Enterbankname[j]);
        cout << Enterbankname[j] << "\n";
        
        getline(myReadFile,Enterphonenumber[j]);
        cout << Enterphonenumber[j] << "\n";
        
        
    j=j+1;
   }

  // Close the file
  myReadFile.close();
  
}

void DeleteUserAccount(string UserBookstoreAccountNames[], string UserBookstoreAccountNumbers[], string UserBookstoreBankNames[], string UserBookstorePhoneNumbers[], int& BookstoreNumAccounts) {
    if (BookstoreNumAccounts == 0) {
        cout << "No User Bookstore Accounts Found." << endl;
        return;
    }

    int BookstoreAccountIndex;
    cout << "Enter User Bookstore Account Index to Delete (1 - " << BookstoreNumAccounts << "): ";
    cin >> BookstoreAccountIndex;
    cin.ignore();

    if (BookstoreAccountIndex < 1 || BookstoreAccountIndex > BookstoreNumAccounts) {
        cout << "Invalid User Bookstore Account Index." << endl;
        return;
    }

    for (int i = BookstoreAccountIndex - 1; i < BookstoreNumAccounts - 1; i++) {
        UserBookstoreAccountNames[i] = UserBookstoreAccountNames[i + 1];
        UserBookstoreAccountNumbers[i] = UserBookstoreAccountNumbers[i + 1];
        UserBookstoreBankNames[i] = UserBookstoreBankNames[i + 1];
        UserBookstorePhoneNumbers[i] = UserBookstorePhoneNumbers[i + 1];
    }

    BookstoreNumAccounts--;
    cout << "Novel Bookstore User Account Deleted Successfully." << endl;
    
}

int main() {
    ofstream MyWriteFile("data.dat");
    int i;
    string novelgenre[10];
    string availablebook[10];
    string paymentmethod[10];

    i = 0;
    MyWriteFile << "romantic" << "\n";
    MyWriteFile << "saat jatuh cinta, dilan, laskar pelangi,cinta di hujung sejadah,dikta dan hukum\n";
    MyWriteFile << "affin bank berhad, alliance bank malaysia, ambank m berhad, cimb bank berhad, hong leong bank berhad\n";
    i = i + 1;
    MyWriteFile << "horror" << "\n";
    MyWriteFile << "Kisah Tanah Jawa, Danur, Teman, Ritual Pesta Bunuh Diri\n";
    MyWriteFile << "affin bank berhad, alliance bank malaysia, ambank m berhad, cimb bank berhad, hong leong bank berhad\n";
    i = i + 1;
    MyWriteFile << "sad" << "\n";
    MyWriteFile << "Rindu yang Terhalang, Andai Itu Takdirnya, Cinta Dua Zaman, Korban Kasih, Rindu Awak Separuh Nyawa \n";
    MyWriteFile << "affin bank berhad, alliance bank malaysia, ambank m berhad, cimb bank berhad, hong leong bank berhad\n";

    MyWriteFile.close();

    string myText;
    ifstream myReadFile("data.dat");
    int j = 0;

    while (!myReadFile.eof()) {
        getline(myReadFile, novelgenre[j]);
        cout << novelgenre[j] << "\n";

        getline(myReadFile, availablebook[j]);
        cout << availablebook[j] << "\n";

        getline(myReadFile, paymentmethod[j]);
        cout << paymentmethod[j] << "\n";

        j = j + 1;
    }

    myReadFile.close();

    string romanticGenre[MAX_BOOKS] = {
        "Saat Jatuh Cinta",
        "Dilan",
        "Laskar Pelangi",
        "Cinta di Hujung Sejadah",
        "Dikta dan Hukum"
    };

    string horrorGenre[MAX_BOOKS] = {
        "Kisah Tanah Jawa",
        "Danur",
        "Teman",
        "Ritual Pesta Bunuh Diri"
    };

    string sadGenre[MAX_BOOKS] = {
        "Rindu yang Terhalang",
        "Andai Itu Takdirnya",
        "Cinta Dua Zaman",
        "Korban Kasih",
        "Rindu Awak Separuh Nyawa"
    };

    string paymentMethods[MAX_PAYMENT_METHODS] = {
        "Affin Bank Berhad",
        "Alliance Bank Malaysia Berhad",
        "AmBank (M) Berhad",
        "CIMB Bank Berhad",
        "Hong Leong Bank Berhad",
        "Bank Islam"
    };

    string UserBookstoreAccountNames[MAX_BOOKSTOREACCOUNTS];
    string UserBookstoreAccountNumbers[MAX_BOOKSTOREACCOUNTS];
    string UserBookstoreBankNames[MAX_BOOKSTOREACCOUNTS];
    string UserBookstorePhoneNumbers[MAX_BOOKSTOREACCOUNTS];
    int BookstoreNumAccounts = 0;

    string cart[MAX_BOOKS];
    int cartCount = 0;

    string genre;
    string paymentMethod;

    cout << "----- Online Novel Bookstore -----" << endl;

    // Enter novel genre
    cout << "Enter the novel genre (romantic, horror, sad): ";
    cin >> genre;

    // Validate and display books based on genre
    int bookCount = 0;
    const string* bookList = romanticGenre; // Assign a default genre

    if (genre == "romantic") {
        bookCount = 5;
        bookList = romanticGenre;
    }
    else if (genre == "horror") {
        bookCount = 4;
        bookList = horrorGenre;
    }
    else if (genre == "sad") {
        bookCount = 5;
        bookList = sadGenre;
    }
    else {
        cout << "Invalid genre!" << endl;
        return 0;
    }

    cout << "Available books in the " << genre << " genre:" << endl;
    displayBooks(bookList, bookCount);

    // Pick your choice novel
    int choice;
    cout << "Enter the number of the book you want to purchase: ";
    cin >> choice;

    if (choice >= 1 && choice <= bookCount) {
        // Add book to cart
        if (cartCount < MAX_BOOKS) {
            cart[cartCount++] = bookList[choice - 1];
            cout << "Book added to cart successfully!" << endl;
        }
        else {
            cout << "Cart is full! Cannot add more books." << endl;
        }
    }
    else {
        cout << "Invalid book choice!" << endl;
    }

    // Choose payment method
    cout << "Choose your payment method:" << endl;
    for (int i = 0; i < MAX_PAYMENT_METHODS; ++i) {
        cout << i + 1 << ". " << paymentMethods[i] << endl;
    }
    int paymentChoice;
    cout << "Enter the number of your payment method: ";
    cin >> paymentChoice;

    if (paymentChoice >= 1 && paymentChoice <= MAX_PAYMENT_METHODS) {
        paymentMethod = paymentMethods[paymentChoice - 1];
        cout << "Payment method chosen: " << paymentMethod << endl;
    }
    else {
        cout << "Invalid payment method!" << endl;
    }

    // End of process
    cout << "End of process. Thank you for using our online novel bookstore!" << endl;

    ofstream MyWriteFile2("data.dat");
    string itemName[10];
    string itemNumber[10];
    string price[10];
    string quantity[10];
    string destinationCity[10];
    string recipientName[10];
    
    i = 0;
    MyWriteFile2 << "Saat Jatuh Cinta" << "\n";
    MyWriteFile2 << "1\n";
    MyWriteFile2 << "RM 55.00\n";
    MyWriteFile2 << "1\n";
    MyWriteFile2 << "kuala lumpur\n";
    MyWriteFile2 << "ahmad yusuf bin sabri\n";
    

    MyWriteFile2.close();

    string myText2;
    ifstream myReadFile2("data.dat");
    j = 0;

    while (!myReadFile2.eof()) {
        getline(myReadFile2, itemName[j]);
        cout << itemName[j] << "\n";

        getline(myReadFile2, itemNumber[j]);
        cout << itemNumber[j] << "\n";

        getline(myReadFile2, price[j]);
        cout << price[j] << "\n";

        getline(myReadFile2, quantity[j]);
        cout << quantity[j] << "\n";

        getline(myReadFile2, destinationCity[j]);
        cout << destinationCity[j] << "\n";

        getline(myReadFile2, recipientName[j]);
        cout << recipientName[j] << "\n";

        j = j + 1;
    }

    myReadFile2.close();

    string itemNames[10];
    string itemNumbers[10];
    float itemPrices[10];
    int itemQuantities[10];
    string itemDestinationCities[10];
    string itemRecipientNames[10];
    float totalPrice;

    cout << "Welcome to ONLINE BOOKSTORE!" << endl;
    cout << "Enter item name: ";
    cin.ignore();
    getline(cin, itemNames[0]);
    cout << "Enter the item number: ";
    getline(cin, itemNumbers[0]);
    cout << "Enter the price: ";
    cin >> itemPrices[0];
    cout << "Enter the quantity of the item: ";
    cin >> itemQuantities[0];
    cout << "Enter destination city: ";
    cin.ignore();
    getline(cin, itemDestinationCities[0]);
    cout << "Enter recipient name: ";
    getline(cin, itemRecipientNames[0]);

    totalPrice = itemPrices[0] * itemQuantities[0];

    cout << endl << "Order Summary:" << endl;
    cout << "Item Name: " << itemNames[0] << endl;
    cout << "Item Number: " << itemNumbers[0] << endl;
    cout << "Item Price: " << itemPrices[0] << endl;
    cout << "Quantity: " << itemQuantities[0] << endl;
    cout << "Destination City: " << itemDestinationCities[0] << endl;
    cout << "Recipient Name: " << itemRecipientNames[0] << endl;
    cout << "Total Price: " << totalPrice << endl;

    cout << endl << "You have done your payment!" << endl;

    int numCustomers = 0;
    bool customers[] = { true, false, true, true, false, true, false, true };
    int numTotalCustomers = sizeof(customers) / sizeof(customers[0]);

    for (int i = 0; i < numTotalCustomers; i++) {
        if (customers[i]) {
            numCustomers++;
        }
    }

    cout << "Number of customers who bought the item: " << numCustomers << endl;

    cout << "Welcome to JnT Express" << endl;

    cout << "Enter Online Novel Bookstore item order number: ";
    string orderNumber;
    cin >> orderNumber;

    cout << "Enter normal price of the item: ";
    string itemPrice;
    cin >> itemPrice;

    cout << "Enter quantity of the item: ";
    string quantityStr;
    cin >> quantityStr;

    cout << "Enter date of purchase: ";
    string date;
    cin >> date;

    cout << "Enter total price of the item: ";
    string total;
    cin >> total;

    string trackingNumber = "60";
    trackingNumber += orderNumber.substr(0, 2);
    trackingNumber += itemPrice.substr(0, 2);
    trackingNumber += quantityStr.substr(0, 1);
    trackingNumber += date.substr(0, 2);
    trackingNumber += total.substr(0, 3);

    cout << "Tracking number: " << trackingNumber << endl;

    NovelLoverAccount accounts[MAX_ACCOUNTS];
    int accountCount = 0;

    cout << "Welcome to the Novel Bookshop!" << endl;

    while (true) {
        cout << "----- Novel Bookstore Interface -----" << endl;
        cout << "1. Create a new Novel Lover account" << endl;
        cout << "2. Add Bookstore Account" << endl;
        cout << "3. Retrieve Bookstore Data" << endl;
        cout << "4. Update Bookstore Data" << endl;
        cout << "5. Delete Bookstore Account" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                createNovelLoverAccount(accounts, accountCount);
                break;

            case 2:
                addBookstoreAccount(UserBookstoreAccountNames, UserBookstoreAccountNumbers, UserBookstoreBankNames, UserBookstorePhoneNumbers, BookstoreNumAccounts);
                break;

            case 3:
                retrieveData(UserBookstoreAccountNames, UserBookstoreAccountNumbers, UserBookstoreBankNames, UserBookstorePhoneNumbers, BookstoreNumAccounts);
                break;

            case 4:
                UpdateUserData(UserBookstoreAccountNames, UserBookstoreAccountNumbers, UserBookstoreBankNames, UserBookstorePhoneNumbers, BookstoreNumAccounts);
                break;

            case 5:
                DeleteUserAccount(UserBookstoreAccountNames, UserBookstoreAccountNumbers, UserBookstoreBankNames, UserBookstorePhoneNumbers, BookstoreNumAccounts);
                break;

            case 6:
                cout << "End of process. Thank you for using the Online Novel Bookstore!" << endl;
                return 0;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
