#parse("Copyright Notice Header.h")
#pragma once

#if (${NAMESPACES_OPEN} == "")
namespace cassia {
#else
${NAMESPACES_OPEN}
#end
class ${NAME} {
};
#if (${NAMESPACES_OPEN} == "")
}
#else
${NAMESPACES_CLOSE}
#end