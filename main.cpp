
// A registrar system demokkkkkkkkkkkkkkkkkk
>>>>>>> refs/remotes/origin/dev
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
    auto sysXZ = &Registrar::singleton;

    sysXZ().initialize();

    // Simulate some students erolls in some courses
    sysXZ().studentEnrollsInCourse("S001", "CS101");
    sysXZ().studentEnrollsInCourse("S001", "CS201");
    sysXZ().studentEnrollsInCourse("S001", "MATH101");

    sysXZ().studentEnrollsInCourse("S002", "CS101");
    sysXZ().studentEnrollsInCourse("S002", "MATH101");

    sysXZ().studentEnrollsInCourse("S003", "CS201");
    sysXZ().studentEnrollsInCourse("S003", "MATH101");


    sysXZ().studentEnrollsInCourse("S004", "CS101");
    sysXZ().studentEnrollsInCourse("S004", "CS201");

    sysXZ().studentEnrollsInCourse("S005", "CS201");

    std::println();

    sysXZ().courseRoster("CS101");
    sysXZ().courseRoster("CS201");
    sysXZ().courseRoster("MATH101");

    sysXZ().studentSchedule("S001");

    sysXZ().studentSchedule("S003");

    return 0;
}
