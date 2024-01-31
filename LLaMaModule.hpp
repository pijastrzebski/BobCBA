#pragma once

#include "IModule.hpp"

namespace bobcba {

	class LLaMaModule : public IModule {
	public:
		~LLaMaModule() override = default;
		int init() override;
	};

}  // namespace bobcba
