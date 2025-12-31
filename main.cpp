// A registrar system demokkkkkkkkkkkkkkkkkk
// File: main.cpp   Version: 1.0      License: AGPLv3
// Created: Wei Gong open-src@qq.com      2025-12-12
//
// Description:
//     Testing the registrar system

// Change Log:ghcfhcfhcf
//     [v1.1] Wei Gong open-src@qq.com   2025-12-12 17:57:41
//         * simulating student course registration, viewing course enrollment lists
//     [v1.2] Wei Gong open-src@qq.com   2025-12-12 18:07:17
//         * simulating view student schedule
import registrar;
import std;

int main()
{
    // alias for static function Registrar::singleton
    auto sysLuLu = &Registrar::singleton;

    sysLuLu().initialize();

    // Simulate some students erolls in some courses
    sysLuLu().studentEnrollsInCourse("S001", "CS101");
    sysLuLu().studentEnrollsInCourse("S001", "CS201");
    sysLuLu().studentEnrollsInCourse("S001", "MATH101");

    sysLuLu().studentEnrollsInCourse("S002", "CS101");
    sysLuLu().studentEnrollsInCourse("S002", "MATH101");

    sysLuLu().studentEnrollsInCourse("S003", "CS201");
    sysLuLu().studentEnrollsInCourse("S003", "MATH101");


    sysLuLu().studentEnrollsInCourse("S004", "CS101");
    sysLuLu().studentEnrollsInCourse("S004", "CS201");

    sysLuLu().studentEnrollsInCourse("S005", "CS201");

    std::println();

    sysLuLu().courseRoster("CS101");
    sysLuLu().courseRoster("CS201");
    sysLuLu().courseRoster("MATH101");

    sysLuLu().studentSchedule("S001");

    sysLuLu().studentSchedule("S003");

    return 0;
}
