#ifndef _SECRETARIA_HPP_
#define _SECRETARIA_HPP_
#include <string>
#include "funcionario.hpp"

class Secretaria : public Funcionario{
	private:
		Secretaria();
		int senha;
};

#endif
