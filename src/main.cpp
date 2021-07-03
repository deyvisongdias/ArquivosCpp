#include <iostream>
#include <fstream>
#include <cstdlib>

// ofstream,ifstream ,fstream

using namespace std;

int main()
{
    //ofstream e so para adicionar texto no arquivo
    /*
        ofstream arquivo;
        arquivo.open("testeOfstream.txt");

        //ios::app e para nao sobrescrever uma linha, ou seja ,para adicionar na sequencia

        arquivo<<"teste"<<endl;
        arquivo<<"deyvison gregorio dias"<<endl;
        arquivo<<"21 anos"<<endl;

        arquivo.close();


        //ifstream e so para leitura de texto no arquivo

        ifstream arquivoE;
        arquivoE.open("testeOfstream.txt");
        string linha;//para ler a linha do arquivo

        if(arquivoE.is_open())
        {
            while(getline(arquivoE,linha))
            {
                cout<<linha<<endl;
            }
            arquivoE.close();
        }
        else
        {
            cout<<"Nao foi possivel abrir o arquivo (Arquivo nao esta aberto)"<<endl;
        }
    */
//fstream faz as funçoes de ler e escrever no arquivo

    fstream arquivo;
    string linha,texto;
    char c='s';
    arquivo.open("testeFstream.txt",ios::out | ios::in);

    cout<<"Digite um nome :"<<endl;
    while(c=='s' || c=='S')
    {
        cin>>texto;
        arquivo<<texto<<endl;
        cout<<"Deseja digitar mais?(s/n)"<<endl;
        cin>>c;
        system("CLS");
    }

    arquivo.open("testeFstream.txt",ios::in);

    cout<<"Nomes digitados :"<<endl;
    if(arquivo.is_open())
    {
        while(getline(arquivo,linha))
        {
            cout<<linha<<endl;
        }
        arquivo.close();
    }
    else
    {
        cout<<"Nao foi possivel abrir o arquivo (Arquivo nao esta aberto)"<<endl;
    }



    return 0;
}
