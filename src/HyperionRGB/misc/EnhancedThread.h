#ifndef EnhancedThread_h
#define EnhancedThread_h

#include "../misc/BaseHeader.h"
#include <Thread.h>

class EnhancedThread: public Thread {
  public:
    void
      run(void),
      runIfNeeded(void),
      reset(void),
      setRunOnce(bool);
  private:
    bool _runOnce;
};

#endif
