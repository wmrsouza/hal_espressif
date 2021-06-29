ifdef CONFIG_OPENTHREAD_ENABLED

COMPONENT_ADD_INCLUDEDIRS :=       \
    openthread/include             \
    include

COMPONENT_PRIV_INCLUDEDIRS :=      \
    openthread/src                 \
    openthread/src/core            \
    openthread/src/lib/hdlc        \
    openthread/src/lib/spinel      \
    openthread/src/ncp             \
    private_include

COMPONENT_SRCDIRS :=            \
    openthread/src/cli          \
    openthread/src/core         \
    openthread/src/core/api     \
    openthread/src/core/coap    \
    openthread/src/core/common  \
    openthread/src/core/crypto  \
    openthread/src/core/diags   \
    openthread/src/core/mac     \
    openthread/src/core/meshcop \
    openthread/src/core/net     \
    openthread/src/core/radio   \
    openthread/src/core/thread  \
    openthread/src/core/utils   \
    openthread/src/lib/hdlc     \
    openthread/src/lib/platform \
    openthread/src/lib/spinel   \
    port

COMPONENT_OBJEXCLUDE := \
    openthread/src/core/common/extension_example.o

IDF_VERSION_FOR_OPENTHREAD_PACKAGE := $(shell git -C $(COMPONENT_PATH) rev-parse --short HEAD)
OPENTHREAD_VERSION := $(shell git -C $(COMPONENT_PATH)/openthread rev-parse --short HEAD)
OPENTHREAD_PACKAGE_VERSION := $(IDF_VERSION_FOR_OPENTHREAD_PACKAGE)-$(OPENTHREAD_VERSION)

COMMON_FLAGS :=                                                              \
    -DOPENTHREAD_CONFIG_FILE=\<openthread-core-esp32x-config.h\>             \
	-DPACKAGE_VERSION=\"OPENTHREAD_PACKAGE_VERSION\"

ifdef CONFIG_OPENTHREAD_FTD
	COMMON_FLAGS += -DOPENTHREAD_FTD=1
else ifdef CONFIG_OPENTHREAD_MTD
	COMMON_FLAGS += -DOPENTHREAD_MTD=1
else ifdef CONFIG_OPENTHREAD_RADIO
	COMMON_FLAGS += -DOPENTHREAD_RADIO=1
endif

CFLAGS += $(COMMON_FLAGS)

CXXFLAGS += $(COMMON_FLAGS)

CPPFLAGS += $(COMMON_FLAGS)

endif
