/*
C++ REST API with get and post endpoints
*/

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;
#include "crow_all.h
#include "crow.h"

int main()
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([](){
        return "Hello world";
    });

    CROW_ROUTE(app, "/add/<int>/<int>").methods("POST"_method)([](int a, int b){
        return a + b;
    });

    CROW_ROUTE(app, "/add/<int>/<int>").methods("GET"_method)([](int a, int b){
        return a + b;
    });

    app.port(18080).multithreaded().run();
}

/*
curl -X POST XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
curl -X GET XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
*/

