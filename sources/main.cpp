/* 
 * File:   main.cpp
 * Author: haikalpribadi
 *
 * Created on 29 December 2013, 16:08
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include <marsyas/MarSystem.h>

#include "bextract.h"


using namespace std;

/*
 * 
 */
int main(int argc, const char** argv) {
    cout << "Radiophonic Haptic Machine Learning" << endl << endl;
    vector<string> args;
    for(int i=1; i<argc; i++)
        args.push_back(argv[i]);
    bextractor(args);
    
    
    return 0;
}
