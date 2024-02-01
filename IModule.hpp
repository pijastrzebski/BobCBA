#pragma once

namespace bobcba {

	class IModule {
	public:
		virtual ~IModule() = default;

		virtual int init() = 0;
	};

}  // namespace bobcba
