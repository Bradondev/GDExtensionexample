#ifndef BUTTONBASETEST_H
#define BUTTONBASETEST_H

#include <godot_cpp/classes/button.hpp>

namespace godot {

class ButttonBaseTest : public Button {
	GDCLASS(ButttonBaseTest , Button)



protected:
	static void _bind_methods();

public:
	ButttonBaseTest();//constructor
	~ButttonBaseTest();
	
	void BaseTest(String words);
	
	void _process(double delta) override;
};

}

#endif