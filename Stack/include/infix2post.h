#ifndef DSA_INFIX2POST_H
#define DSA_INFIX2POST_H

int precedence(char op);

namespace DSA{
    void infix2postfix(char* buffer,char* output);
}

#endif
