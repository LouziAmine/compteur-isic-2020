////////////////////////////////////////////////////////////////////////////////
//   ____  ____   
//  /   /\/   /  
// /___/  \  /   
// \   \   \/  
//  \   \        Copyright (c) 2003-2004 Xilinx, Inc.
//  /   /        All Right Reserved. 
// /---/   /\     
// \   \  /  \  
//  \___\/\___\
////////////////////////////////////////////////////////////////////////////////

#ifndef H_Work_counter_10_tb_behavior_H
#define H_Work_counter_10_tb_behavior_H
#ifdef __MINGW32__
#include "xsimMinGW.h"
#else
#include "xsim.h"
#endif


class Work_counter_10_tb_behavior: public HSim__s6 {
public:


HSim__s4 Cy;
    HSim__s1 SA[3];
    Work_counter_10_tb_behavior(const char * name);
    ~Work_counter_10_tb_behavior();
    void constructObject();
    void constructPorts();
    void reset();
    void architectureInstantiate(HSimConfigDecl* cfg);
    virtual void vhdlArchImplement();
};



HSim__s6 *createWork_counter_10_tb_behavior(const char *name);

#endif
