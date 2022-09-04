#include<iostream>
#include<array>
#include<tuple>
using namespace std;

class Algorithm{
    public:
        array<int, 20> arrayA, arrayB;
        int maxValue, C, a, b, c;
        int row1, col1, row2, col2;
        int option, length, n;
        std::string check = "true";

        void welcome(){
            cout<<"\t------------------------------------------------"<<endl<<endl;
            cout<<"\t\tWelcome to The Algorithm Class"<<endl<<endl;
            cout<<"\t------------------------------------------------"<<endl<<endl;
            cout<<"\tSelect any of the Algorithm below: (Input format 'integer')"<<endl<<endl;
            cout<<"\t\t1. Find Maximum Value\n";
            cout<<"\t\t2. Determine Uniqueness of an array\n";
            cout<<"\t\t3. Multipply Two Matrices\n";
            cout<<"\t\t4. Implement Gaussian Eliminationof an Matrix A\n";
            cout<<"\t\t5. Determining The Number of Binary Digit of an Integer\n";
            cout<<"\t\t6. Exit the Applicaton"<<endl<<endl;

        }

        // MAXIMUM ELEMENT
        void maximumElement(){
            cout<<"Input the number of elements in the array: ";cin>>n;
                        for(a = 0; a<n; a++){
                            cout<<"Element at index "<<a<<" = ";cin>>arrayA[a];
                        }
                        maxValue = arrayA[0];
                        // A for loop to iterate over the loop.
                        for(a = 0; a<n; a++){
                            // if statement for check for the max value.
                            if(arrayA[a] > maxValue){ 
                                // The max value is the stored inside maxVal variable.
                                maxValue = arrayA[a]; 
                            }
                        // Returning the maxvalue at the end of iteration.
                        }cout<<"\nThe maximum element is "<<maxValue<<endl<<endl;
        }

        // UNIQUE VALUE
        void  uniqueElement(){
            cout<<"Input the number of elements of the array: ";cin>>n;
            cout<<"NOTE: Element shoild be in the form Array[0, n-1,...n]"<<endl;
            for(a = 0; a<n; a++){
                cout<<"Element at index "<<a<<" = ";cin>>arrayA[a];
            }
            // Double for loops to iterate over the array simultaneously.
            for(int a = 0; a<n-1; a++){
                for(int b = a+1; b<n; b++){
                    // Conparison of the variable k and j to determin if they are equal using '=='.
                    if(arrayA[a] == arrayA[b]){
                        // Variable check is changed to false if the condition is met.
                        check = "false";
                    }
                }
            }
            // Value of the variable check, is then returned.
            cout<<check<<endl<<endl;
        }

        // MATRIX MULTIPLICATION
        void matrixMultiplication(){
            cout<<"Enter number of rows for Matrix A: "; cin>>row1;
            cout<<"Enter number of columns for Matrix A: "; cin>>col1;
            cout<<endl;
            int matrixA[row1][col1];
            for(a = 0; a<row1; a++){
                cout<<"Enter values for rows of matrix A: "<<a+1<<endl;
                for(b = 0; b<2; b++){
                    cout<<"Index "<<a<<b<<"value: ";cin>>matrixA[a][b];
                }cout<<endl;
            }

            cout<<"Enter number of rows for Matrix B: "; cin>>row2;
            cout<<"Enter number of columns for Matrix B: "; cin>>col2;
            cout<<endl;
            int matrixB[row2][col2];
            for(a = 0; a<row1; a++){
                cout<<"Enter values for row of matrix B: "<<a+1<<endl;
                for(b = 0; b<2; b++){
                    cout<<"Index "<<a<<b<<"value: ";cin>>matrixB[a][b];
                }cout<<endl;
            }

            // Displaying Matrix A and B to the user
            cout<<"Matrix A"<<endl;
            for(a=0;a<row1;a++){
                for(b=0;b<col1;b++){
                    cout<<matrixA[a][b]<<"\t";
                }cout<<endl;
            }cout<<"----------";
            cout<<"\nMatrix B"<<endl;
            for(a=0;a<row2;a++){
                for(b=0;b<col2;b++){
                    cout<<matrixA[a][b]<<"\t";
                }cout<<endl;
            }cout<<"----------"<<endl;

            // The matrix multipllication is done here
            cout<<"---Result of Multiplication---"<<endl;
            for(int a = 0; a<2; a++){
                // for loop to access matrix B columns
                for(int b = 0; b<2; b++){
                    // matrix C is put to zero (0).
                    C = 0;
                    // for loop to access matrix A columns
                    for(int c = 0; c<2; c++){
                        // The results of the multiplication
                        // is stored/appended into matris C
                        C = C + matrixA[a][c] * matrixB[c][b];
                    }
                    // result is displayed with the help of
                    // '\t' for adding tabs usually 4 spaces
                    // between every answer.
                    cout<<C<<"\t";
                }
                cout<<endl;
            }
            cout<<endl<<endl;
        }

        // GAUSSIAN ELIMINATION METHOD
        void gaussianElimination(){
            int A[2][3] = {{0, 1, 2,}, {3, 4, 5}};
                        for(a=0;a<2-1;a++){
                            for(b=a+1;b<2;b++){
                                for(c=a;c<2+1;c++){
                                    int simplifyExpression = A[b][a] / A[a][a];
                                    A[b][c] = A[b][c] - A[a][c] * simplifyExpression;
                                }
                            }
                        }
                        cout<<endl<<endl;
        }

        // COUNTING BINARY DIGIT
        void countBinary(){
            cout<<"Input an integer to determine is number of binary representation: ";cin>>n;
                        int numberOfBinaryDigits = 1;
                        while (n>1)
                        {
                            // The counter keeps on increasing by 1 while n is greater than 1
                            numberOfBinaryDigits++;
                            // n is being divided by 2 till it's no more greater than 1
                            n = n/2;
                        }
                        cout<<"The number of binary digits representation is ";
                        cout<<numberOfBinaryDigits<<endl<<endl;
        }

        void AlgorithmsSelection(){
            do{
                welcome();
                cout<<"waiting...";cin>>option;
                cout<<"----------------"<<endl;
                // system("CLS");

                while(option<1 || option>6){
                    welcome();
                    cout<<"Please an Select an option between 1 and 6\n";cin>>option;
                }
                switch(option){
                    // MAXIMUM ELEMENT
                    case 1:{
                        maximumElement(); break;
                    }
                    // UNIQUE VALUE
                    case 2:{
                        uniqueElement(); break;
                    }
                    // MATRIX MULTIPLICATION
                    case 3:{
                        matrixMultiplication(); break;
                    }
                    // GAUSSIAN ELIMINATION METHOD
                    case 4:{
                        gaussianElimination(); break;
                    }
                    // COUNTING BINARY DIGIT
                    case 5:{
                        countBinary(); break;
                    }
                }               
            }while(option != 6);
        }
};

int main(){
    Algorithm alg;
    alg.AlgorithmsSelection();
    return 0;
}
