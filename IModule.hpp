#pragma once

namespace bobcba {

	struct IModule {
		virtual ~IModule() = 0;

		virtual int init() = 0;
	};

}  // namespace bobcba
