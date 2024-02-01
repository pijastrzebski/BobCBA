#pragma once

namespace bobcba {

	class IApp {
	public:
		virtual ~IApp() = default;

		virtual int init() = 0;
		virtual int execute() = 0;
	};

}  // namespace bobcba
