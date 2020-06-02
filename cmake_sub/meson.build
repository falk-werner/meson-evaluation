project('lws_print_version', 'c')

cmake = import('cmake')
lws = cmake.subproject('libwebsockets')

# print availalble targets
#foreach target: lws.target_list()
#    message(target)
#endforeach

lws_dep = lws.dependency('websockets_shared')

executable('lws_print_version',
    'src/main.c',
    dependencies: [lws_dep])
