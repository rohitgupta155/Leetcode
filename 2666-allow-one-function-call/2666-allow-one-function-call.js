/**
 * @param {Function} fn
 * @return {Function}
 */
var once = function(fn) {
    let v=1;
    return function(...args){
        if(v===1){
            v=undefined;
        return fn(...args);}
        return v;
    }
};

/**
 * let fn = (a,b,c) => (a + b + c)
 * let onceFn = once(fn)
 *
 * onceFn(1,2,3); // 6
 * onceFn(2,3,6); // returns undefined without calling fn
 */
