#pragma once

#if defined(_WIN32)
    #define TORCHCS_EXPORT [[nodiscard]] __declspec(dllimport)
#elif defined(__GNUC__) || defined(__clang__)
  #define TORCHCS_EXPORT [[nodiscard]] __attribute__((visibility("default")))
#else
  #define TORCHCS_EXPORT [[nodiscard]]
#endif
