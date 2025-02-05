#include "YYRunnerInterface.h"

#include <memory.h>

static YYRunnerInterface g_YYRunnerInterface{};
YYRunnerInterface* g_pYYRunnerInterface;
__declspec(dllexport) void YYExtensionInitialise(const struct YYRunnerInterface* _struct, size_t _size) {
	if (_size < sizeof(YYRunnerInterface)) {
		memcpy(&g_YYRunnerInterface, _struct, _size);
	}
	else {
		memcpy(&g_YYRunnerInterface, _struct, sizeof(YYRunnerInterface));
	}
	g_pYYRunnerInterface = &g_YYRunnerInterface;
}