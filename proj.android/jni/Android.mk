LOCAL_PATH := $(call my-dir)
<<<<<<< HEAD
include $(CLEAR_VARS)
LOCAL_MODULE := cocos2dcpp_shared
LOCAL_MODULE_FILENAME := libcocos2dcpp

define walk
	$(wildcard $(1)) $(foreach e,$(wildcard $(1)/*),$(call walk, $(e)))
endef
ALLFILES = $(call walk,$(LOCAL_PATH)/../../Classes)
$(warning $(ALLFILES))
FILE_LIST := $(filter %.cpp,$(ALLFILES))
LOCAL_SRC_FILES := hellocpp/main.cpp
LOCAL_SRC_FILES += $(FILE_LIST:$(LOCAL_PATH)/%=%)

FILE_INCLUDES := $(shell find $(LOCAL_PATH)/../../Classes -type d)

LOCAL_C_INCLUDES := $(FILE_INCLUDES)
=======

include $(CLEAR_VARS)

LOCAL_MODULE := cocos2dcpp_shared

LOCAL_MODULE_FILENAME := libcocos2dcpp

LOCAL_SRC_FILES := hellocpp/main.cpp \
                   ../../Classes/AppDelegate.cpp \
                   ../../Classes/HelloWorldScene.cpp

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../Classes
>>>>>>> f389ddd2247b23a9dcd15f66bb4f71bcdfda868d

LOCAL_WHOLE_STATIC_LIBRARIES := cocos2dx_static
LOCAL_WHOLE_STATIC_LIBRARIES += cocosdenshion_static
LOCAL_WHOLE_STATIC_LIBRARIES += box2d_static

<<<<<<< HEAD
=======

>>>>>>> f389ddd2247b23a9dcd15f66bb4f71bcdfda868d
include $(BUILD_SHARED_LIBRARY)

$(call import-module,2d)
$(call import-module,audio/android)
$(call import-module,Box2D)
