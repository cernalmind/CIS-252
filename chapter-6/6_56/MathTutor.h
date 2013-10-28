/* MathTutor.h - (Computer-Assisted Instruction)

The use of computers in education is referred to as computer-assisted
instruction (CAI). Write a program that will help an elementary school
student learn multiplication. Use the rand function to produce two
positive one-digit integers. The program should then prompt the user 
with a question, such as:

    "How much is 6 times 7?""

The student then inputs the answer. Next, the program checks the
student’s answer. If it’s correct, display the message "Very good!" 
and ask another multiplication question. If the answer is wrong, 
display the message "No. Please try again." and let the student try 
the same question repeatedly until the student finally gets it right. 
A separate function should be used to generate each new question. This
function should be called once when the application begins execution 
and each time the user answers the question correctly. */

using namespace std;

class MathTutor
{
public:
    MathTutor( ); 

    void askQuestion( ); 
    bool checkAnswer( int ); 
    void generate( );

private:
    int term1;
    int term2;
    int correct_answer;
};