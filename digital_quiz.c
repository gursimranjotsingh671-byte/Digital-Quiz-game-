#include <stdio.h>

int main()
{
    int answer, score = 0;
    int questions = 10;

    char *q[] = {
        "Which language is used for system programming?",
        "What is the brain of a computer?",
        "Which planet is known as Red Planet?",
        "How many bits are in one byte?",
        "Who invented C language?",
        "Which symbol ends a C statement?",
        "Which function starts C execution?",
        "What is the full form of CPU?",
        "Which loop executes at least once?",
        "Which header is used for printf()?"
    };

    char *options[][4] = {
        {"Java", "C", "HTML", "Python"},
        {"RAM", "CPU", "Mouse", "Monitor"},
        {"Earth", "Venus", "Mars", "Jupiter"},
        {"4", "8", "16", "32"},
        {"Dennis Ritchie", "James Gosling", "Bill Gates", "Bjarne Stroustrup"},
        {".", ",", ";", ":"},
        {"start()", "main()", "run()", "begin()"},
        {"Central Processing Unit", "Computer Personal Unit",
         "Central Program Utility", "Control Processing User"},
        {"for", "while", "do-while", "if"},
        {"stdlib.h", "math.h", "stdio.h", "string.h"}
    };

    int correct[] = {2, 2, 3, 2, 1, 3, 2, 1, 3, 3};

    printf("\n================================\n");
    printf("       DIGITAL QUIZ GAME\n");
    printf("================================\n");

    printf("\nAnswer the following 10 questions.\n");
    printf("Each correct answer carries 1 mark.\n");

    for(int i = 0; i < questions; i++)
    {
        printf("\nQ%d. %s\n", i + 1, q[i]);

        for(int j = 0; j < 4; j++)
            printf("%d. %s\n", j + 1, options[i][j]);

        printf("Your answer (1-4): ");
        scanf("%d", &answer);

        if(answer == correct[i])
        {
            printf("Correct Answer!\n");
            score++;
        }
        else if(answer >= 1 && answer <= 4)
        {
            printf("Wrong! Correct answer: %s\n",
                   options[i][correct[i] - 1]);
        }
        else
        {
            printf("Invalid answer! No marks awarded.\n");
        }
    }

    printf("\n================================\n");
    printf("          QUIZ RESULT\n");
    printf("================================\n");

    printf("Total Questions: %d\n", questions);
    printf("Correct Answers: %d\n", score);
    printf("Wrong Answers: %d\n", questions - score);
    printf("Final Score: %d/%d\n", score, questions);
    printf("Percentage: %.2f%%\n",
           (score * 100.0) / questions);

    if(score >= 8)
        printf("\nExcellent Performance!\n");
    else if(score >= 5)
        printf("\nGood Performance!\n");
    else
        printf("\nKeep Practicing!\n");

    printf("\nTHANK YOU FOR PLAYING!\n");

    return 0;
}
