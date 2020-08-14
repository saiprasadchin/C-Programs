#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char sentance[100], replace[30], found[30], newSentance[100];
    cout << "\nEnter sentance :\n";
    cin.getline(sentance, 100);
    cout << "\nEnter the word to be replaced :\n";
    cin.getline(replace, 30);
    cout << "\nEnter word :\n";
    cin.getline(found, 30);

    int lengthOfRplace = strlen(replace);
    int lengthOfSentence = strlen(sentance);
    //cout<< lengthOfRplace <<endl;
    //cout<< lengthOfSentence <<endl;
    int startPosition = 0;
    int endPosition = 0;
    int block = 0;
    for (int i = 0; sentance[i] != '\0';i++)
    {
        int temp = i;
        for(int j = 0; replace[j] != '\0';j++ )
        {
            if(sentance[temp] == replace[j])
            {
                temp++;
                if( j == (lengthOfRplace - 1)){
                    startPosition = i;
                    endPosition = i + lengthOfRplace;
                    block = 1;
                    break;
                }
            }else{
                break;
            }   
        }
        if(block == 1){
            break;
        }
    }
    int index = 0;
    for (int i = 0; i < startPosition; i++)
    {
        newSentance[index++] = sentance[i];
    }

    for (int i = 0;found[i] != '\0'; i++ )
    {
        newSentance[index++] = found[i];
        startPosition++;
    }
    for (int i = endPosition ;sentance[i] != '\0'; i++ )
    {
        newSentance[index++] = sentance[i];
    }
    newSentance[index++] = '\0';


    cout <<"\nAfter replacing :"<<endl;
    cout <<newSentance<<endl; 
    return 0;
}