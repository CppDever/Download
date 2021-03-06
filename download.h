#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<curl/curl.h>
#include<thread>
#include"./log/log.h"
using namespace std;

class Download
{
    public:
        Download()
        {
            _totalBytes=0;
            _nowBytes=0;
        }
        ~Download()
        {}

        //long long GetFileTotalLen(const std::string &url);
        
        int StartDownloadFile(const std::string &url,const std::string &savePath,const std::string &fileName);
        
        long long GetFileTotalLen(const std::string url); 
    private:
        volatile long long _totalBytes;
        volatile long long _nowBytes;
};
