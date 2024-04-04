#include "ButtonAddOn.h"
#include <godot_cpp/core/class_db.hpp>
#include<godot_cpp/godot.hpp>


using namespace godot;


 ButttonBaseTest::ButttonBaseTest() {
	// Initialize any variables here.

}

 ButttonBaseTest::~ ButttonBaseTest() {
	// Add your cleanup here.
}


void  ButttonBaseTest::_bind_methods() {
	ClassDB::add_property("GDExample", PropertyInfo(Variant::FLOAT, "amplitude"), "set_amplitude", "get_amplitude");
}



void ButttonBaseTest::_process(double delta) {

}
void  ButttonBaseTest::BaseTest(String words){

}
