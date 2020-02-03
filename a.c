#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int process(const char *input_filename, const char *output_filename){
int numProcess= 0;
        FILE *fp;
        fp= fopen(input_filename,"r");

        FILE *opfp = fopen(output_filename,"w");

        double d1,d2;
        char op;

        while(fscanf(fp, "%lf %c %lf", &d1, &op, &d2)==3){

                 double computed;
                 switch(op){
                         case '+':
                                 computed = d1+d2;
                                 numProcess++;
                                 break;
                        case '-':
                                 computed = d1-d2;
                                 numProcess++;
                                 break;
                        case '*':
                                 computed = d1*d2;
                                 numProcess++;
                                 break;
                        case '/':
                                 computed = d1/d2;
                                 numProcess++;
                                 break;
                        case '^':
                                 computed = pow(d1,d2);
                                 numProcess++;
                                 break;
                }//endSwitch

        fprintf(opfp, "%lf\n", computed);


        }//endLoop
fclose(fp);
fclose(opfp);

return numProcess;
}//end FUNX


int main(){

printf("%d\n",process("input.txt","out.txt"));

return 0;
}
