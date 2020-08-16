#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char sentance1[100], replace1[30], found1[30], newSentance[100],sentance[100], replace[30],found[30];
    cout << "\nEnter sentance :\n";
    cin.getline(sentance1, 100);
    cout << "\nEnter the word to be replaced :\n";
    cin.getline(replace1, 30);
    cout << "\nEnter word :\n";
    cin.getline(found1, 30);

    int lengthOfRplace = 0;
    int lengthOfSentence = 0;
    int lengthOfFound = 0;
    replace[lengthOfRplace++] = ' ';
    sentance[lengthOfSentence++] = ' ';
    found[lengthOfFound++] = ' ';
    for (int i = 0; replace1[i] != '\0'; i++)
        replace[lengthOfRplace++] = replace1[i];
    
    for (int i = 0; sentance1[i] != '\0'; i++)
        sentance[lengthOfSentence++] = sentance1[i];

    for (int i = 0; found1[i] != '\0'; i++)
        found[lengthOfFound++] = found1[i];


    replace[lengthOfRplace++] = ' ';
    sentance[lengthOfSentence++] = ' ';
    replace[lengthOfRplace] = '\0';
    sentance[lengthOfSentence] = '\0';
    found[lengthOfFound] = '\0';
    int startPosition = 0;
    int endPosition = 0;
    int block = 0;
    for (int l = 0; sentance[l] != '\0';l++)
    {
        int index = 0;
        int temp = l;
        for(int j = 0; replace[j] != '\0';j++ )
        {
            if(sentance[temp] == replace[j])
            {
                temp++;
                if( j == (lengthOfRplace - 1)){
                    block = 1;
                    startPosition = l;
                    endPosition = l + lengthOfRplace;
                    for (int i = 0; i < startPosition; i++)
                        newSentance[index++] = sentance[i];
                    

                    for (int i = 0;found[i] != '\0'; i++ )
                        newSentance[index++] = found[i];
                    
                    newSentance[index++] = ' ';
                    for (int i = endPosition ;sentance[i] != '\0'; i++ )
                        newSentance[index++] = sentance[i];
                    
                    newSentance[index++] = '\0';
                    int k = 0;
                    for (int i = 0; newSentance[i] != '\0'; i++)
                        sentance[k++] = newSentance[i];

                    sentance[k++] = '\0';
                    break;
                }
            }else{
                break;
            }   
        }
    }
    if ( block == 1 ){
        cout <<"\n===After replacing==="<<endl;
        cout <<newSentance<<endl;
    }else{
        cout <<"\n"<<replace1<<" word not present in sentence"<<endl;
    }
        
    return 0;
}