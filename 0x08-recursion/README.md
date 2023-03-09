# RECURSION

<div class="well clean" id="project-description">
<p><img src="https://github.com/TeddyO323/photos/blob/main/a88.jpg?raw=true" /></p>

# Resources

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/2818ba6f14f644b871dcbd746925fa15b8cd5937.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20220330%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220330T211831Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=b470957ff4d89304ae4237033051debda993b55550e6f018ae48b89919c0fa1b" title="0x08. Recursion, introduction" target="_blank">0x08. Recursion, introduction</a></li>
<li><a href="https://www.youtube.com/watch?v=Mv9NEXX1VHc" title="What on Earth is Recursion?" target="_blank">What on Earth is Recursion?</a> </li>
<li><a href="https://www.tutorialspoint.com/cprogramming/c_recursion.htm" title="C - Recursion" target="_blank">C - Recursion</a> </li>
<li><a href="https://www.youtube.com/watch?v=XGxbXMP6k8k" title="C Programming Tutorial 85, Recursion pt.1" target="_blank">C Programming Tutorial 85, Recursion pt.1</a> </li>
<li><a href="https://www.youtube.com/watch?v=7XiIS6HobNs" title="C Programming Tutorial 86, Recursion pt.2" target="_blank">C Programming Tutorial 86, Recursion pt.2</a> </li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="https://fs.blog/feynman-learning-technique/" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What is recursion</li>
<li>How to implement recursion</li>
<li>In what situations you should implement recursion</li>
<li>In what situations you shouldn&rsquo;t implement recursion</li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>You are not allowed to use the standard library. Any use of functions like <code>printf</code>, <code>puts</code>, etc&hellip; is forbidden</li>
<li>You are allowed to use <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c" title="_putchar" target="_blank">_putchar</a></li>
<li>You don&rsquo;t have to push <code>_putchar.c</code>, we will use our file. If you do it won&rsquo;t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>main.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li><strong>You are not allowed to use any kind of loops</strong></li>
<li>You are not allowed to use <code>static</code> variables</li>
</ul>

</div>

---

# TASKS

# 0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget

<p>Write a function that prints a string, followed by a new line.</p>

<ul>
<li>Prototype: <code>void _puts_recursion(char *s);</code></li>
</ul>

<p>FYI: The standard library provides a similar function: <code>puts</code>. Run <code>man puts</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 0-main.c
#include &quot;main.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _puts_recursion(&quot;Puts with recursion&quot;);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
julien@ubuntu:~/0x08. Recursion$ ./0-puts_recursion 
Puts with recursion
julien@ubuntu:~/0x08. Recursion$ 
</code></pre>

  </div>

 
<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x08-recursion</code></li>
            <li>File: <code>0-puts_recursion.c</code></li>
        </ul>
      </div>

# 1. Why is it so important to dream? Because, in my dreams we are together
 <p>Write a function that prints a string in reverse.</p>

<ul>
<li>Prototype: <code>void _print_rev_recursion(char *s);</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 1-main.c
#include &quot;main.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _print_rev_recursion(&quot;\nColton Walker&quot;);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion
julien@ubuntu:~/0x08. Recursion$ ./1-print_rev_recursion 
reklaW notloC
julien@ubuntu:~/0x08. Recursion$ 
</code></pre>

  </div>

 
<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x08-recursion</code></li>
            <li>File: <code>1-print_rev_recursion.c</code></li>
        </ul>

# 2. Dreams feel real while we&#39;re in them. It&#39;s only when we wake up that we realize something was actually strange
 
<p>Write a function that returns the length of a string.</p>

<ul>
<li>Prototype: <code>int _strlen_recursion(char *s);</code></li>
</ul>

<p>FYI: The standard library provides a similar function: <code>strlen</code>. Run <code>man strlen</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 2-main.c 
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = _strlen_recursion(&quot;Corbin Coleman&quot;);
    printf(&quot;%d\n&quot;, n);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89  2-main.c 2-strlen_recursion.c -o 2-strlen_recursion
julien@ubuntu:~/0x08. Recursion$ ./2-strlen_recursion 
14
julien@ubuntu:~/0x08. Recursion$ 
</code></pre>

  </div>

<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x08-recursion</code></li>
            <li>File: <code>2-strlen_recursion.c</code></li>
        </ul>

# 3. You mustn&#39;t be afraid to dream a little bigger, darling
   
<p>Write a function that returns the factorial of a given number.</p>

<ul>
<li>Prototype: <code>int factorial(int n);</code><br></li>
<li>If <code>n</code> is lower than <code>0</code>, the function should return <code>-1</code> to indicate an error<br></li>
<li>Factorial of <code>0</code> is <code>1</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 3-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = factorial(1);
    printf(&quot;%d\n&quot;, r);
    r = factorial(5);
    printf(&quot;%d\n&quot;, r);
    r = factorial(10);
    printf(&quot;%d\n&quot;, r);
    r = factorial(-1024);
    printf(&quot;%d\n&quot;, r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-factorial.c -o 3-factorial
julien@ubuntu:~/0x08. Recursion$ ./3-factorial 
1
120
3628800
-1
julien@ubuntu:~/0x08. Recursion$
</code></pre>

  </div>

 
 <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x08-recursion</code></li>
            <li>File: <code>3-factorial.c</code></li>
        </ul>
      </div>

# 4. Once an idea has taken hold of the brain it&#39;s almost impossible to eradicate
 
<p>Write a function that returns the value of <code>x</code> raised to the power of <code>y</code>.</p>

<ul>
<li>Prototype: <code>int _pow_recursion(int x, int y);</code><br></li>
<li>If <code>y</code> is lower than <code>0</code>, the function should return <code>-1</code></li>
</ul>

<p>FYI: The standard library provides a different function: <code>pow</code>. Run <code>man pow</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 4-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _pow_recursion(1, 10);
    printf(&quot;%d\n&quot;, r);
    r = _pow_recursion(1024, 0);
    printf(&quot;%d\n&quot;, r);
    r = _pow_recursion(2, 16);
    printf(&quot;%d\n&quot;, r);
    r = _pow_recursion(5, 2);
    printf(&quot;%d\n&quot;, r);
    r = _pow_recursion(5, -2);
    printf(&quot;%d\n&quot;, r);
    r = _pow_recursion(-5, 3);
    printf(&quot;%d\n&quot;, r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-pow_recursion.c -o 4-pow
julien@ubuntu:~/0x08. Recursion$ ./4-pow 
1
1
65536
25
-1
-125
julien@ubuntu:~/0x08. Recursion$ 
</code></pre>

  </div>

  <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x08-recursion</code></li>
            <li>File: <code>4-pow_recursion.c</code></li>
        </ul>

# 5. Your subconscious is looking for the dreamer
  
<p>Write a function that returns the natural square root of a number.</p>

<ul>
<li>Prototype: <code>int _sqrt_recursion(int n);</code><br></li>
<li>If <code>n</code> does not have a natural square root, the function should return <code>-1</code></li>
</ul>

<p>FYI: The standard library provides a different function: <code>sqrt</code>. Run <code>man sqrt</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 5-main.c 
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf(&quot;%d\n&quot;, r);
    r = _sqrt_recursion(1024);
    printf(&quot;%d\n&quot;, r);
    r = _sqrt_recursion(16);
    printf(&quot;%d\n&quot;, r);
    r = _sqrt_recursion(17);
    printf(&quot;%d\n&quot;, r);
    r = _sqrt_recursion(25);
    printf(&quot;%d\n&quot;, r);
    r = _sqrt_recursion(-1);
    printf(&quot;%d\n&quot;, r);
    return (0);
}
julien@ubuntu:~/0x08. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-sqrt_recursion.c -o 5-sqrt
julien@ubuntu:~/0x08. Recursion$ ./5-sqrt 
1
32
4
-1
5
-1
julien@ubuntu:~/0x08. Recursion$ 
</code></pre>

  </div>
 <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x08-recursion</code></li>
            <li>File: <code>5-sqrt_recursion.c</code></li>
        </ul>
      </div>

# 6. Inception. Is it possible?
<p>Write a function that returns <code>1</code> if the input integer is a <a href="/rltoken/bjG_8Gu-_0rwbYA_tAv2Yw" title="prime number" target="_blank">prime number</a>, otherwise return <code>0</code>.</p>

<ul>
<li>Prototype: <code>int is_prime_number(int n);</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 6-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_prime_number(1);
    printf(&quot;%d\n&quot;, r);
    r = is_prime_number(1024);
    printf(&quot;%d\n&quot;, r);
    r = is_prime_number(16);
    printf(&quot;%d\n&quot;, r);
    r = is_prime_number(17);
    printf(&quot;%d\n&quot;, r);
    r = is_prime_number(25);
    printf(&quot;%d\n&quot;, r);
    r = is_prime_number(-1);
    printf(&quot;%d\n&quot;, r);
    r = is_prime_number(113);
    printf(&quot;%d\n&quot;, r);
    r = is_prime_number(7919);
    printf(&quot;%d\n&quot;, r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-is_prime_number.c -o 6-prime
julien@ubuntu:~/0x08. Recursion$ ./6-prime 
0
0
0
1
0
0
1
1
julien@ubuntu:~/0x08. Recursion$ 
</code></pre>

  </div>

<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x08-recursion</code></li>
            <li>File: <code>6-is_prime_number.c</code></li>
        </ul>

# 7. They say we only use a fraction of our brain&#39;s true potential. Now that&#39;s when we&#39;re awake. When we&#39;re asleep, we can do almost anything
   
 <p>Write a function that returns <code>1</code> if a string is a palindrome and <code>0</code> if not.</p>

<ul>
<li>Prototype: <code>int is_palindrome(char *s);</code><br></li>
<li>An empty string is a palindrome</li>
</ul>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 100-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_palindrome(&quot;level&quot;);
    printf(&quot;%d\n&quot;, r);
    r = is_palindrome(&quot;redder&quot;);
    printf(&quot;%d\n&quot;, r);
    r = is_palindrome(&quot;test&quot;);
    printf(&quot;%d\n&quot;, r);
    r = is_palindrome(&quot;step on no pets&quot;);
    printf(&quot;%d\n&quot;, r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-is_palindrome.c -o 100-palindrome
julien@ubuntu:~/0x08. Recursion$ ./100-palindrome 
1
1
0
1
julien@ubuntu:~/0x08. Recursion$
</code></pre>

  </div>
<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x08-recursion</code></li>
            <li>File: <code>100-is_palindrome.c</code></li>
        </ul>
      </div>

# 8. Inception. Now, before you bother telling me it&#39;s impossible...
<p>Write a function that compares two strings and returns <code>1</code> if the strings can be considered identical, otherwise return <code>0</code>.</p>

<ul>
<li>Prototype: <code>int wildcmp(char *s1, char *s2);</code></li>
<li><code>s2</code> can contain the special character <code>*</code>.</li>
<li>The special char <code>*</code> can replace any string (including an empty string)</li>
</ul>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 101-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = wildcmp(&quot;main.c&quot;, &quot;*.c&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main.c&quot;, &quot;m*a*i*n*.*c*&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main.c&quot;, &quot;main.c&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main.c&quot;, &quot;m*c&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main.c&quot;, &quot;ma********************************c&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main.c&quot;, &quot;*&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main.c&quot;, &quot;***&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main.c&quot;, &quot;m.*c&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main.c&quot;, &quot;**.*c&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main-main.c&quot;, &quot;ma*in.c&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main&quot;, &quot;main*d&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;abc&quot;, &quot;*b&quot;);
    printf(&quot;%d\n&quot;, r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 101-wildcmp.c -o 101-wildcmp
julien@ubuntu:~/0x08. Recursion$ ./101-wildcmp 
1
1
1
1
1
1
1
0
1
1
0
0
julien@ubuntu:~/0x08. Recursion$ 
</code></pre>

  </div>

<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x08-recursion</code></li>
            <li>File: <code>101-wildcmp.c</code></li>
        </ul>
      </div># RECURSION

<div class="well clean" id="project-description">
<p><img src="https://github.com/TeddyO323/photos/blob/main/a88.jpg?raw=true" /></p>

# Resources

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/2818ba6f14f644b871dcbd746925fa15b8cd5937.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20220330%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220330T211831Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=b470957ff4d89304ae4237033051debda993b55550e6f018ae48b89919c0fa1b" title="0x08. Recursion, introduction" target="_blank">0x08. Recursion, introduction</a></li>
<li><a href="https://www.youtube.com/watch?v=Mv9NEXX1VHc" title="What on Earth is Recursion?" target="_blank">What on Earth is Recursion?</a> </li>
<li><a href="https://www.tutorialspoint.com/cprogramming/c_recursion.htm" title="C - Recursion" target="_blank">C - Recursion</a> </li>
<li><a href="https://www.youtube.com/watch?v=XGxbXMP6k8k" title="C Programming Tutorial 85, Recursion pt.1" target="_blank">C Programming Tutorial 85, Recursion pt.1</a> </li>
<li><a href="https://www.youtube.com/watch?v=7XiIS6HobNs" title="C Programming Tutorial 86, Recursion pt.2" target="_blank">C Programming Tutorial 86, Recursion pt.2</a> </li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="https://fs.blog/feynman-learning-technique/" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What is recursion</li>
<li>How to implement recursion</li>
<li>In what situations you should implement recursion</li>
<li>In what situations you shouldn&rsquo;t implement recursion</li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>You are not allowed to use the standard library. Any use of functions like <code>printf</code>, <code>puts</code>, etc&hellip; is forbidden</li>
<li>You are allowed to use <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c" title="_putchar" target="_blank">_putchar</a></li>
<li>You don&rsquo;t have to push <code>_putchar.c</code>, we will use our file. If you do it won&rsquo;t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>main.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li><strong>You are not allowed to use any kind of loops</strong></li>
<li>You are not allowed to use <code>static</code> variables</li>
</ul>

</div>

---

# TASKS

# 0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget

<p>Write a function that prints a string, followed by a new line.</p>

<ul>
<li>Prototype: <code>void _puts_recursion(char *s);</code></li>
</ul>

<p>FYI: The standard library provides a similar function: <code>puts</code>. Run <code>man puts</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 0-main.c
#include &quot;main.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _puts_recursion(&quot;Puts with recursion&quot;);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
julien@ubuntu:~/0x08. Recursion$ ./0-puts_recursion 
Puts with recursion
julien@ubuntu:~/0x08. Recursion$ 
</code></pre>

  </div>

 
<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x08-recursion</code></li>
            <li>File: <code>0-puts_recursion.c</code></li>
        </ul>
      </div>

# 1. Why is it so important to dream? Because, in my dreams we are together
 <p>Write a function that prints a string in reverse.</p>

<ul>
<li>Prototype: <code>void _print_rev_recursion(char *s);</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 1-main.c
#include &quot;main.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _print_rev_recursion(&quot;\nColton Walker&quot;);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion
julien@ubuntu:~/0x08. Recursion$ ./1-print_rev_recursion 
reklaW notloC
julien@ubuntu:~/0x08. Recursion$ 
</code></pre>

  </div>

 
<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x08-recursion</code></li>
            <li>File: <code>1-print_rev_recursion.c</code></li>
        </ul>

# 2. Dreams feel real while we&#39;re in them. It&#39;s only when we wake up that we realize something was actually strange
 
<p>Write a function that returns the length of a string.</p>

<ul>
<li>Prototype: <code>int _strlen_recursion(char *s);</code></li>
</ul>

<p>FYI: The standard library provides a similar function: <code>strlen</code>. Run <code>man strlen</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 2-main.c 
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = _strlen_recursion(&quot;Corbin Coleman&quot;);
    printf(&quot;%d\n&quot;, n);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89  2-main.c 2-strlen_recursion.c -o 2-strlen_recursion
julien@ubuntu:~/0x08. Recursion$ ./2-strlen_recursion 
14
julien@ubuntu:~/0x08. Recursion$ 
</code></pre>

  </div>

<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x08-recursion</code></li>
            <li>File: <code>2-strlen_recursion.c</code></li>
        </ul>

# 3. You mustn&#39;t be afraid to dream a little bigger, darling
   
<p>Write a function that returns the factorial of a given number.</p>

<ul>
<li>Prototype: <code>int factorial(int n);</code><br></li>
<li>If <code>n</code> is lower than <code>0</code>, the function should return <code>-1</code> to indicate an error<br></li>
<li>Factorial of <code>0</code> is <code>1</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 3-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = factorial(1);
    printf(&quot;%d\n&quot;, r);
    r = factorial(5);
    printf(&quot;%d\n&quot;, r);
    r = factorial(10);
    printf(&quot;%d\n&quot;, r);
    r = factorial(-1024);
    printf(&quot;%d\n&quot;, r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-factorial.c -o 3-factorial
julien@ubuntu:~/0x08. Recursion$ ./3-factorial 
1
120
3628800
-1
julien@ubuntu:~/0x08. Recursion$
</code></pre>

  </div>

 
 <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x08-recursion</code></li>
            <li>File: <code>3-factorial.c</code></li>
        </ul>
      </div>

# 4. Once an idea has taken hold of the brain it&#39;s almost impossible to eradicate
 
<p>Write a function that returns the value of <code>x</code> raised to the power of <code>y</code>.</p>

<ul>
<li>Prototype: <code>int _pow_recursion(int x, int y);</code><br></li>
<li>If <code>y</code> is lower than <code>0</code>, the function should return <code>-1</code></li>
</ul>

<p>FYI: The standard library provides a different function: <code>pow</code>. Run <code>man pow</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 4-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _pow_recursion(1, 10);
    printf(&quot;%d\n&quot;, r);
    r = _pow_recursion(1024, 0);
    printf(&quot;%d\n&quot;, r);
    r = _pow_recursion(2, 16);
    printf(&quot;%d\n&quot;, r);
    r = _pow_recursion(5, 2);
    printf(&quot;%d\n&quot;, r);
    r = _pow_recursion(5, -2);
    printf(&quot;%d\n&quot;, r);
    r = _pow_recursion(-5, 3);
    printf(&quot;%d\n&quot;, r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-pow_recursion.c -o 4-pow
julien@ubuntu:~/0x08. Recursion$ ./4-pow 
1
1
65536
25
-1
-125
julien@ubuntu:~/0x08. Recursion$ 
</code></pre>

  </div>

  <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x08-recursion</code></li>
            <li>File: <code>4-pow_recursion.c</code></li>
        </ul>

# 5. Your subconscious is looking for the dreamer
  
<p>Write a function that returns the natural square root of a number.</p>

<ul>
<li>Prototype: <code>int _sqrt_recursion(int n);</code><br></li>
<li>If <code>n</code> does not have a natural square root, the function should return <code>-1</code></li>
</ul>

<p>FYI: The standard library provides a different function: <code>sqrt</code>. Run <code>man sqrt</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 5-main.c 
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf(&quot;%d\n&quot;, r);
    r = _sqrt_recursion(1024);
    printf(&quot;%d\n&quot;, r);
    r = _sqrt_recursion(16);
    printf(&quot;%d\n&quot;, r);
    r = _sqrt_recursion(17);
    printf(&quot;%d\n&quot;, r);
    r = _sqrt_recursion(25);
    printf(&quot;%d\n&quot;, r);
    r = _sqrt_recursion(-1);
    printf(&quot;%d\n&quot;, r);
    return (0);
}
julien@ubuntu:~/0x08. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-sqrt_recursion.c -o 5-sqrt
julien@ubuntu:~/0x08. Recursion$ ./5-sqrt 
1
32
4
-1
5
-1
julien@ubuntu:~/0x08. Recursion$ 
</code></pre>

  </div>
 <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x08-recursion</code></li>
            <li>File: <code>5-sqrt_recursion.c</code></li>
        </ul>
      </div>

# 6. Inception. Is it possible?
<p>Write a function that returns <code>1</code> if the input integer is a <a href="/rltoken/bjG_8Gu-_0rwbYA_tAv2Yw" title="prime number" target="_blank">prime number</a>, otherwise return <code>0</code>.</p>

<ul>
<li>Prototype: <code>int is_prime_number(int n);</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 6-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_prime_number(1);
    printf(&quot;%d\n&quot;, r);
    r = is_prime_number(1024);
    printf(&quot;%d\n&quot;, r);
    r = is_prime_number(16);
    printf(&quot;%d\n&quot;, r);
    r = is_prime_number(17);
    printf(&quot;%d\n&quot;, r);
    r = is_prime_number(25);
    printf(&quot;%d\n&quot;, r);
    r = is_prime_number(-1);
    printf(&quot;%d\n&quot;, r);
    r = is_prime_number(113);
    printf(&quot;%d\n&quot;, r);
    r = is_prime_number(7919);
    printf(&quot;%d\n&quot;, r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-is_prime_number.c -o 6-prime
julien@ubuntu:~/0x08. Recursion$ ./6-prime 
0
0
0
1
0
0
1
1
julien@ubuntu:~/0x08. Recursion$ 
</code></pre>

  </div>

<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x08-recursion</code></li>
            <li>File: <code>6-is_prime_number.c</code></li>
        </ul>

# 7. They say we only use a fraction of our brain&#39;s true potential. Now that&#39;s when we&#39;re awake. When we&#39;re asleep, we can do almost anything
   
 <p>Write a function that returns <code>1</code> if a string is a palindrome and <code>0</code> if not.</p>

<ul>
<li>Prototype: <code>int is_palindrome(char *s);</code><br></li>
<li>An empty string is a palindrome</li>
</ul>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 100-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_palindrome(&quot;level&quot;);
    printf(&quot;%d\n&quot;, r);
    r = is_palindrome(&quot;redder&quot;);
    printf(&quot;%d\n&quot;, r);
    r = is_palindrome(&quot;test&quot;);
    printf(&quot;%d\n&quot;, r);
    r = is_palindrome(&quot;step on no pets&quot;);
    printf(&quot;%d\n&quot;, r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-is_palindrome.c -o 100-palindrome
julien@ubuntu:~/0x08. Recursion$ ./100-palindrome 
1
1
0
1
julien@ubuntu:~/0x08. Recursion$
</code></pre>

  </div>
<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x08-recursion</code></li>
            <li>File: <code>100-is_palindrome.c</code></li>
        </ul>
      </div>

# 8. Inception. Now, before you bother telling me it&#39;s impossible...
<p>Write a function that compares two strings and returns <code>1</code> if the strings can be considered identical, otherwise return <code>0</code>.</p>

<ul>
<li>Prototype: <code>int wildcmp(char *s1, char *s2);</code></li>
<li><code>s2</code> can contain the special character <code>*</code>.</li>
<li>The special char <code>*</code> can replace any string (including an empty string)</li>
</ul>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 101-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = wildcmp(&quot;main.c&quot;, &quot;*.c&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main.c&quot;, &quot;m*a*i*n*.*c*&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main.c&quot;, &quot;main.c&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main.c&quot;, &quot;m*c&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main.c&quot;, &quot;ma********************************c&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main.c&quot;, &quot;*&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main.c&quot;, &quot;***&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main.c&quot;, &quot;m.*c&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main.c&quot;, &quot;**.*c&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main-main.c&quot;, &quot;ma*in.c&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main&quot;, &quot;main*d&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;abc&quot;, &quot;*b&quot;);
    printf(&quot;%d\n&quot;, r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 101-wildcmp.c -o 101-wildcmp
julien@ubuntu:~/0x08. Recursion$ ./101-wildcmp 
1
1
1
1
1
1
1
0
1
1
0
0
julien@ubuntu:~/0x08. Recursion$ 
</code></pre>

  </div>

<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x08-recursion</code></li>
            <li>File: <code>101-wildcmp.c</code></li>
        </ul>
      </div>