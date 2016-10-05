ADD_EXECUTABLE(toggle-button toggle-button.cxx)

TARGET_LINK_LIBRARIES(toggle-button ${FLTK_LIBRARIES})
TARGET_LINK_LIBRARIES(toggle-button ${OPENGL_LIBRARIES})