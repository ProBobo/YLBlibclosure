

int ___main_block_invoke(int arg0) {
    stack[-48] = CFGetRetainCount(*(arg0 + 0x20));
    r0 = NSLog(0x100004078);
    return r0;
}


int _main(int arg0, int arg1) {
    var_58 = objc_autoreleasePoolPush();
    [objc_alloc_init() retain];
    r0 = objc_retainBlock(&var_48);
    (*(r0 + 0x10))(r0);
    objc_storeStrong(&saved_fp - 0x20, 0x0);
    objc_storeStrong(&var_48 + 0x20, 0x0);
    objc_storeStrong(&saved_fp - 0x18, 0x0);
    objc_autoreleasePoolPop(var_58);
    return 0x0;
}
