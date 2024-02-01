#pragma once

#include "IModule.hpp"

namespace bobcba {

	class LLaMaModule : public IModule {
	public:
		int init() override;
	};

}  // namespace bobcba
