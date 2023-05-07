/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
// const i;
var createCounter = function(init) {
    let i=init;
    return{
        increment:function()
    {
        init++;
        return init;
    },
    decrement: function() {
        init--;
        return init;
    },
    reset: function()
    {
        init=i;
        return init;
    },
    }
    
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */