
#include <iostream>
#include <string>
#include <chrono>
#include <ctime>


#include "sync_obj.h"
#include "monitor.h"

int main() {
    klog::Out::A = [](const char* msg) { std::fputs(msg, stdout); };
    {
        monitor::test();
        return 0;
    }
    {
        sync_obj<int>::test();
        return 0;
    }
}

