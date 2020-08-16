#include <iostream>
#include <fstream>
using namespace std;
void writeToFile(string, string);
string readFile(string);

int main() {
    string contentFileOne;
    string contentFileTwo;

    contentFileOne = readFile("fileOne.txt");
    contentFileTwo = readFile("fileTwo.txt");

    writeToFile("fileTwo.txt", contentFileOne);
    writeToFile("fileOne.txt", contentFileTwo);
    return 0;
}


string readFile(string fileName) {
    fstream fileStream;
    string fileContent;
    string line;
    fileStream.open(fileName);
    if (fileStream.is_open()){
        while (getline (fileStream, line)) {
            fileContent.append(line);
            fileContent.append("\n");
        }        
        fileStream.close();
    } else {
        cout << "Unable to open file";
    }
    fileStream.open(fileName, ios::out | ios::trunc);
    fileStream.close();
    return fileContent;
}

void writeToFile(string fileName, string fileContent) {
    fstream fileStream;
    fileStream.open(fileName, ios::out | ios::trunc);
    if (fileStream.is_open()) {
        fileStream << fileContent ;
        fileStream.close();
    }
}
