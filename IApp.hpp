#pragma once

namespace bobcba {

	struct IApp {
		virtual ~IApp() = default;

		virtual int init() = 0;
		virtual int execute() = 0;
	};

}  // namespace bobcba
