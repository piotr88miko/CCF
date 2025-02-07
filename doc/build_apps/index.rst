Build Apps
==========

This section describes how CCF applications can be developed and deployed to a CCF network.

Applications can be written in JavaScript/TypeScript or C++. An application consists of a collection of endpoints that can be triggered by :term:`Users`. Each endpoint can define an :ref:`build_apps/logging_cpp:API Schema` to validate user requests.

These endpoints can read or mutate the state of a unique :ref:`build_apps/kv/index:Key-Value Store` that represents the internal state of the application. Applications define a set of ``Maps`` (see :doc:`kv/kv_how_to`), mapping from a key to a value. When an application endpoint is triggered, the effects on the Store are committed atomically.

.. panels::

    :fa:`download` :doc:`install_bin`
    ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

    Install CCF on Linux.

    ---

    .. image:: ../img/cpp.svg
      :alt: C++
      :align: left
      :class: ccf-tile-icon

    :doc:`example`
    ^^^^^^^^^^^^^^

    Sample CCF application written in C++.

    ---

    .. image:: ../img/ts.svg
      :alt: TypeScript
      :align: left
      :class: ccf-tile-icon

    :doc:`js_app_ts`
    ^^^^^^^^^^^^^^^

    Sample CCF application written in TypeScript, using the API specified in :typedoc:package:`ccf-app`.

    ---

    :fa:`luggage-cart` :doc:`js_app_bundle`
    ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

    Description of the bundle format for JS applications in CCF.

    ---

    :fa:`tools` :doc:`build_app`
    ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

    Building a CCF application.

    ---

    :fa:`rocket` :doc:`run_app`
    ^^^^^^^^^^^^^^^^^^^^^^^^^^^^

    Running a CCF application demo in a sandbox environment.

    ---

    :fa:`users` :doc:`auth/index`
    ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

    User authentication mechanisms in CCF.

    ---

    :fa:`database` :doc:`kv/index`
    ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

    Transactional access to state is provided by the Key-Value store.

    ---

    :fa:`terminal` :doc:`api`
    ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

    C++ API reference.

    ---

    :fa:`rocket` :doc:`release_policy`
    ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

    CCF release cadence and compatibility committments.


.. toctree::
    :hidden:

    install_bin
    example
    js_app_ts
    js_app_bundle
    build_app
    run_app
    auth/index
    kv/index
    api
    crypto
    release_policy