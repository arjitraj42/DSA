/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let ans = init;

    const increment = () => {
        ++ans;
        return ans;
    }

    const decrement = ()=>{
        --ans;
        return ans;
    }

    const reset = () => {
        ans = init;
        return ans;
    }
    return {
        increment,
        decrement,
        reset
    };
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */